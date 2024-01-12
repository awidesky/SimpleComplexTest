from time import time
import sys

def simple(n):
    while n:
        n -= 1

def complex(n):
    while True:
        if not n:
            break
        n -= 1

for f in [simple, complex] * 3:
    t = time()
    f(10**8)
    print(f.__name__, time() - t)

print('Python:', sys.version)
