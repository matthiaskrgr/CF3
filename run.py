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

#print(FILES);


def test(cfile):
    CFLAG_LIST=[
        ["-O0"],
        ["-O1"],
        ["-O2"],
        ["-O3"],
        ["-Os"],
        ["-Oz"],
        ["-O3", "-march=native"],
        ["-Oz", "-march=native"],
    ]
    for CFLAGS in CFLAG_LIST:
        flagstr=""
        for flag in CFLAGS:
            flagstr += flag
        OUTFILE = cfile+flagstr

        cmd = [ CC,
                cfile,
                "-o",
                OUTFILE,
        ]

        for flag in CFLAGS: #hack
            cmd.append(flag)
        print(cmd)
        subprocess.call(cmd)
        subprocess.call(OUTFILE)



p = Pool(multiprocessing.cpu_count())

p.map(test, set(FILES))


