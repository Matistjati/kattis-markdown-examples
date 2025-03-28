import sys
import random
import math


def cmdlinearg(name, default=None):
    for arg in sys.argv:
        if arg.startswith(name + "="):
            return arg.split("=")[1]
    if default is None:
        print("missing parameter", name)
        sys.exit(1)
    return default

random.seed(int(cmdlinearg('seed', sys.argv[-1])))
n = int(cmdlinearg('n'))
alpha = ['0','1']
print("encode")
print("".join(random.choices(alpha, k=n)))
alpha = ['0','1','2','3']
print("".join(random.choices(alpha, k=n)))
