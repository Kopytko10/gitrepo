#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  petle_cw4.py


def main(args):
    for liczba in range(10, 100): 
        # ~if liczba % 2 == 0:  #Czy parzysta
            # ~if liczba % 3 == 0:  #Czy podzielna przez 3
                # ~print(liczba, " ", end="")
        if liczba % 6 == 0:
            print(liczba, " ", end="")
    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
