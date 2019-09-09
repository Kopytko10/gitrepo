#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla.py
#  


import random

def losuj(ileliczb,  maksliczb):
    liczby = []
    
    ile = 0
    while ile < ileliczb:
        liczba = random.randint(0, maksliczb)
        if liczby.count(liczba) == 0:
            liczby.append(liczba)
            ile += 1
    print(liczby)
    return liczby
    
def main(args):
    lista = losuj(5,30)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
