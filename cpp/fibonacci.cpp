/*
 * fibonacci.cpp
 */
 

#include <iostream>
using namespace std;

long int fibonacci_it(int n) {
    long int wynik = 0;
    long int a = 0; // wyraz n-2
    long int b = 1; // wyraz n-1
    
    if(n == 0) return  a;
    if(n == 1) return  b;
    for(int i = 2; i <= n; i++) {
        wynik = a + b;
            a = b;
            b = wynik;
}           
    return wynik;    
}

long int fibonacci_re(int n) {
    if (n==0) return 0;
    if (n==1) return 1;
    return fibonacci_re(n-1) + fibonacci_re(n-2);
}
    
    
int main(int argc, char **argv)
{
    int n;
	cout << "Podaj numer wyrazu ciągu: ";
    cin >> n;
    cout << "Ciąg Fibonacciego do wyrazu: " << n << ":" << endl;
    // dopisać kod wyswietlający wszystkie wyrazy ciągu aż do wyrazu n
    for (int i = 0; i <= n; i ++){
        cout << (float)fibonacci_it(i+1) / (float)fibonacci_it(i) << endl;
    }
    cout << fibonacci_it(n) << endl;
	return 0;
}

