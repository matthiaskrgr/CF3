#!/usr/bin/env python3


from multiprocessing import Pool
import multiprocessing # cpu count
from PIL import Image as PIL # compare images
import subprocess # launch advdef, optipng, imagemagick
import os # os rename, niceness
import shutil # copy files
import sys # sys.exit



FILES = []

CC="clang"

for root, directories, filenames in os.walk(os.getcwd()):
    for filename in filenames:
        if (filename.endswith(".c")):
            FILES.append(os.path.join(root,filename))

print(FILES);


def test(cfile):
    CFLAGS=["-O3"]
    FLAGS = " ".join(CFLAGS)
    OUTFILE = cfile+("".join(CFLAGS))
    cmd = [ CC,
            cfile,
            "-o",
            OUTFILE,
    ]
    for flag in FLAGS.split(): # hack
        cmd.append(flag)

    subprocess.call(cmd)
    subprocess.call(OUTFILE)
    print(cmd);


p = Pool(multiprocessing.cpu_count())
p.map(test, set(FILES))


