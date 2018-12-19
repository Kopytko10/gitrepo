/*
 * pliniowy.cpp
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n = 6;
    int szuk = 5;
    int tab[n+1] = {1, 4 ,7 , 2, 9, 0};
    tab[n] = szuk; // wartownik na ostatni
    int i = 0;
    while (tab[i] != szuk) i ++;
    if (i < n)
        cout << "Znaleziony";
    else 
        cout << "Nie znaleziony";
    
    return 0;
	return 0;
}

