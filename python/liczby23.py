#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby23.py
  
def liczby2():
    """
    funkcja drukuje wszystkie liczby 2-cyfrowe, w których 
    nie powtarzają się cyfry. Na koniec zwraca ilość takich liczb.
    wykluczone liczby: 11,22,33
    """
    ile = 0 #licznik liczb
    for i in range(1, 10): #pętla dziesiątek
        for j in range(10): #pętla jdności 
            if i != j:
                print("{}{} ".format(i, j), end=" ")
                ile = ile + 1 # zliczenie liczb
                    
    return ile
    """
    funkcja drukuje wszystkie liczby 3-cyfrowe, w których 
    nie powtarzają się cyfry. Na koniec zwraca ilość takich liczb.
    wykluczone liczby: 110,222,333,334
    """
def liczby3():
        


def main(args):
    print("\n\nLiczby 2-cyfrowych:",liczby2())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
