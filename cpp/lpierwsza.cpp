/*
 * lpierwsza.cpp
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    int n = 0; // deklaracja
    cout << "Podaj liczbę: "; /// wszystkie 3 do (wczyatj n )
    cin >> n; // wprowadznie n 
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0) {
            cout << "Liczba złożona ";
            return 0;
        }
    }
    cout << "Liczba pierwsza";
	return 0;
}

