/*
 * horner.cpp
 


 * W(x) = 2x^3 + 3x^2 + 5x + 4  =>  6
 * W(x) = x (2x^2 + 3x + 5)  + 4
 * W(x) = x (x (2x + 3) + 5) + 4 => 3
 */


#include <iostream>
using namespace std;

void drukujw(int stopien, float tbwsp[]) {
    // 3x^3 + 4x^2 + 5x + 1
    int i = 0;
    for(i = 0; i < stopien; i++) {
        cout << tbwsp[i] << "x^" << stopien-i << " + ";
        }
    cout << tbwsp[stopien];
    }

float horner_it(float x, int stopien, float tbwsp[]) {
    // x(x(x + 3)+5) + 4
    float wynik = tbwsp[0];
    for(int i = 1; i <= stopien; i++) {
        wynik = wynik * x + tbwsp[i];
    }
    return wynik;
}

float horner_re(float x, int st, float tb[]) {
    // x(x(x + 3)+5) + 4
    cout << "Argumenty: " << st << " " << tb[st] << endl;
    if (st == 0)
        return tb[0];
    return horner_re(x,st-1, tb) * x + tb[st];
}
//~horner_re(x, 3, tb[])
//~horner_re(x, 2, tb[]) * x + tb[3]
//~horner_re(x, 1, tb[]) * x + tb[2]
//~horner_re(x, 0, tb[]) * x + tb[1]
//~2x+3
//~(2x+3)*x + 5
//~((2x + 3)*x +5) + 4

int main(int argc, char **argv)
{
    float *tbwsp;  // wskaźnik
    float x = 0;
    int stopien = 0;
    cout << "Podaj stopień wielomianu: ";
    cin >> stopien;
    tbwsp = new float [stopien + 1]; //dynamiczna deklaracja tablicy
    cout << tbwsp;

    for(int i=0; i <= stopien; i++) {
        cout << "Podaj współczynnik przy potędze " << stopien-i << ": ";
        cin >> tbwsp[i];
    }
    
    cout << "Podaj argument: ";
    cin >> x;
    
    cout << "Wartość wielomianu o postaci: ";
    drukujw(stopien, tbwsp);
    //cout << "wynosi: " << horner_it(x, stopien, tbwsp) << endl; 
    cout << "wynosi: " << horner_re(x, stopien, tbwsp) << endl; 
    
    return 0;
}
