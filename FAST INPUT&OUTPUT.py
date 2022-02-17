import os  # interact with operating system
import sys  # fast input,output ,maxsize etc
# from collections import *
# from itertools import *
# from math import *
# from queue import *
# from heapq import *
# from bisect import *
# from functools import *
# from numpy import *
# from random import *
from io import BytesIO, IOBase

BUFSIZE = 8192


class FastIO(IOBase):
    newlines = 0

    def __init__(self, file):
        self._fd = file.fileno()  # returns integer file descriptor
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None

    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()

    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()

    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)


class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")


sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
inp = lambda: sys.stdin.readline().rstrip("\r\n")
ri = lambda: int(sys.stdin.readline().rstrip("\r\n"))                        #reading single int
ris = lambda: map(int, sys.stdin.readline().rstrip("\r\n").split())          #reading multiple ints(ex:- 2 3 4)
rs = lambda: sys.stdin.readline().rstrip("\r\n")                             #reading single string
rss = lambda: map(str, sys.stdin.readline().rstrip("\r\n").split())          #reading multiple string
ria = lambda: [int(_) for _ in sys.stdin.readline().rstrip("\r\n").split()]  #reading int array
rsa = lambda: [str(_) for _ in sys.stdin.readline().rstrip("\r\n").split()]  #reading string array


