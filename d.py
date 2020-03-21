
from ctypes import *
mylib = cdll.LoadLibrary("./mylib.dll")
mylib.fmtfa(create_string_buffer(b"./temp"),create_string_buffer(b"./d.txt"))