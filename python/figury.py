#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  figury.py


def prostokat(a, b, znak): 
    for i in range(a): #petla zewnetrzna
        for j in range(b): #petla wewnetrzna
            print(znak, end='') 
        print()  #znak końca lini-przejście do następnego wiersza 
    

def prostokat2(a, b, znak, znak2):
    for i in range(a):
        for j in range(b):
            if j == 0 or j == b - 1 or i == 0 or i == a - 1:
                print(znak, end='')
            else:
                print(znak2, end='')
        print()        
        

def choinka(h, znak):
    for i in range(h):
        for j in range(h):
            if j == 0 or j == h - 1:
                print(znak, end='')
                
            else: 
                print(end='')

def main(args):
    
    a =int(input("Podaj długość boku: "))
    b =int(input("Podaj długość 2 boku: "))
    znak =(input("Podaj znak: "))
    znak2 =(input("Podaj znak: "))
    h =int(input("Podaj wysokość choinki: "))
    
    prostokat(a, b ,znak)
    print(" ")
    print(" ")
    prostokat2(a, b, znak, znak2)
    print(" ")
    print(" ")
    choinka(h, znak)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
