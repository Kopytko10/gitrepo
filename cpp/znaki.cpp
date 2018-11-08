/*
 * znaki.cpp
 */


#include <iostream>

using namespace std;

int zlicz(char tab[]){
    int i = 0; // indeks znaków w tablicy
    while (tab[i] != '\0') i++;
    return i;
    
}

void drukuj(char tab[],int rozmiar) {
    for(int i=0; i < rozmiar; i++) {
        cout << tab[i] << " ";
    }
}

void ascii(char tab[],int rozmiar) {
    int kod = 0; // kod ascii znaku
    for(int i=0; i < rozmiar; i++) {
        kod = (int)tab[i];
        if (kod > 65 && kod < 90)
            cout << (char)(kod+32)  << " ";
        if (kod > 96 && kod < 123)
            cout << (char)(kod-32)  << " ";
        else
            cout << (int)tab[i] << " ";
       
    }
}

void liczznaki(char tab[], int rozmiar) {
    int spacje = 0;
    int interpunkcja = 0;
    int symbole = 0;
    int reszta = 0;
    for(int i=0; i < rozmiar; i++) {
        //~if (tab[i] == ' ') spacje++;
        //~else if (tab[i] == '.' || tab[i] == ',') interpunkcja++;
        //~else if (tab[i] == '(' || tab[i] == ')') symbole++;
        switch (tab[i]) {
            case ' ':
            case '\t':
                spacje++;
            break;
            case '.':
            case ',':
                interpunkcja++;
            break;
            case '(':
            case ')':
                symbole++;
            break;   
            default:
                reszta++;
        }
    }
    cout << "Spacje: " << spacje << endl;
    cout << "interpunkcja: " << interpunkcja << endl;
    cout << "symbole: " << symbole << endl;
    cout << "reszta: " << reszta << endl;
}
    
    

int main(int argc, char **argv)
{
	const int rozmiar = 20;
    char tab[rozmiar];
    cout << "Jak się nazywasz?" << endl;
    //cin >> tab;
    cin.getline(tab, rozmiar);
    //cout << "Cześć " << tab << "!" << endl;
    //drukuj(tab, zlicz(tab));
    ascii(tab, zlicz(tab));
    liczznaki(tab, zlicz(tab));
	return 0;
}

