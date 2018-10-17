#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  tabliczka.py

def tabliczka(a,b):
    for i in range(1, a + 1): #petla zewnetrzna
        for j in range(1, b + 1):
            print("{:>4}".format(i * j), end = '')
        print()
        


def main(args):
    a =int(input("Podaj 1. liczbę: "))
    b =int(input("Podaj 2. liczbę: "))
    tabliczka(a,b)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
