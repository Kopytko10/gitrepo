/*
 * petle_cw01.cpp
 */


#include <iostream>
using namespace std;

void cw01(){
int suma;
int i;
for (i = 10; i < 100; i++) {
    if (i % 2 == 0)
    suma = suma + i; 
    
    }
    cout << suma << endl;
}

void cw02() {
int n;
int m;
int k;
int suma;
cout << "Podaj liczbę: ";
cin >> n;

cout << "Podaj liczbę: ";
cin >> m;

cout << "Podaj liczbę: ";
cin >> k;
suma = n + m;
while (suma != k) {
    cout << "Podaj liczbę: ";
    cin >> i;
    suma = k + i;
    cout << i;
    }
}


int main(int argc, char **argv)
{
	cw01();
    cw02();
	return 0;
}

