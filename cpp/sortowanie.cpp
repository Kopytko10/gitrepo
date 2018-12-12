/*
 * sortowanie.cpp
 */


#include <iostream>
#include <cstdlib>
using namespace std;

void wypelnij(int tab[],int rozmiar) {
    srand(time(NULL)); //inicjacja generatora liczb pseudolosowych 
    cout << "Wprowadź " << rozmiar << " liczb: " << endl;
    for(int i=0; i < rozmiar; i++) {
        tab[i] = rand() % 101; // liczby od 0 do 100
    }
}

void drukuj(int tab[],int rozmiar) {
    for(int i=0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
}


int main(int argc, char **argv)
{
	
	return 0;
}

