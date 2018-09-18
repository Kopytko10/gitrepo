#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  szablon.py
# print()
# input()
# int()-przekształca argument na liczbę całkowitą czyli integer 
# DRY- don't repeat yourself
def witaj():
    imie =input("Podaj swoje imię")
    print("Witaj", imie, "!")

def hello():
    print ("Witaj, jestem Python!")

def suma(l1, l2):
    print("Suma:", l1 + l2)
    
def roznica(l1, l2):
    print("Różnica", l1 - l2)
    
def iloczyn(l1, l2):
    print("Iloczyn", l1 * l2)
    
    
def iloraz(l1, l2):
    print("Iloraz", l1 / l2)
        

def main(args):
    a =int(input("Podaj 1. liczbę: "))
    b =int(input("Podaj 2. liczbę: "))
    print(a)
    print(b)
    
    # print ("Suma:", a + b)
    suma(a, b)
    #print ("Różnica:", a - b)
    roznica(a, b)
    #print ("Iloczyn", a * b)
    iloczyn(a, b) 
    #print ("Iloraz", a / b)
    iloraz(a, b)
    hello() #Wywołanie funkcji 
    witaj()
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
