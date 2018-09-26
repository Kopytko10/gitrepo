#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-cw1.py



def main(args):
    a =int(input("Podaj liczbę: "))
    while a + a < 75:
            a = int(input("Podaj liczbę: "))
            
            
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
