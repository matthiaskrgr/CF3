#!/usr/bin/env python3
from multiprocessing import Pool
import multiprocessing # cpu count
import subprocess 
import os

CC="clang"


FILES = [] # collect files 

for root, directories, filenames in os.walk(os.getcwd()):
    for filename in filenames:
        if (filename.endswith(".c")):
            FILES.append(os.path.join(root,filename))

def test(cfile):
    CFLAG_LIST=[ # cflag combinations to try
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
        EXECUTABLE = cfile+flagstr

        cmd = [ CC,
                cfile,
                "-o",
                EXECUTABLE,
        ]

        for flag in CFLAGS: #hack
            cmd.append(flag)
        print(cmd)
        subprocess.call(cmd)

        executable_process = subprocess.Popen(EXECUTABLE, shell=True,
                             stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        out, err = executable_process.communicate()
        if (len(out) + len(err)) > 0: # check if we have any output
            badcmd = "ERROR: "
            for i in cmd:
                badcmd += i + " "
            badcmd += "./" + EXECUTABLE
            print(badcmd)
            print(out)
            print(err)

p = Pool(multiprocessing.cpu_count())
p.map(test, set(FILES))

