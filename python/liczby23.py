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
    
    
def liczby3():
    """
    funkcja drukuje wszystkie liczby 3-cyfrowe, w których 
    nie powtarzają się cyfry. Na koniec zwraca ilość takich liczb.
    wykluczone liczby: 110,222,333,334
    """
    ile = 0
    for i in range(1, 10): 
        for j in range(10):
            for k in range(10):
                if i != j != k != i:
                    print("{}{}{} ".format(i, j, k), end=" ")
                    ile = ile + 1 
    return ile
                    
def main(args):
    print("\n\nLiczb 2-cyfrowych:",liczby2())
    print(" ")
    print(" ")
    print("\n\nLiczb 3-cyfrowych:",liczby3())
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
