#!/usr/bin/env python
# -*- coding: utf-8 -*-

#  figury.py
def prostokat(a, b, znak): 
    for i in range(a): #petla zewnetrzna
        for j in range(b): #petla wewnetrzna
            print(znak, end='') 
        print()  #znak końca lini-przejście do następnego wiersza 
    
def prostokat2(a, b, znak):
    for i in range(a):
        for j in range(b):
            if j == 0 or j = b - 1:
                print(znak, end='')
            else:
                print(" ", end='')
        print()        
        
def main(args):
    
    a =int(input("Podaj długość boku: "))
    b =int(input("Podaj długość 2 boku: "))
    znak =(input("Podaj znak: "))
    
    prostokat(a, b ,znak)
    print(" ")
    prostokat2(a, b, znak)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
