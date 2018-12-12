/*
 * minmax.cpp
 */


#include <iostream>

using namespace std;

void wypelnij(int tab[],int rozmiar) {
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

void minmax(int tab[],int rozmiar) {
    int minimum = tab[0];
    int maksimum = tab[0];
    for(int i=1; i < rozmiar; i++) {
        if (minimum > tab[i])
            minimum = tab[i];
        if (maksimum < tab[i])
            maksimum = tab[i];
     
    } 
        cout << "Min: " << minimum << endl; 
        cout << "Max: " << maksimum << endl;
}



int main(int argc, char **argv)
{
	const int rozmiar = 10;
    int tab[rozmiar];
    wypelnij(tab, rozmiar);
	drukuj(tab, rozmiar);
    cout << endl;
    minmax(tab, rozmiar); 
    return 0;
}

