/*
 * warunek.cpp
 */


#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    int a;
    int b;
    int c;
    
	cout << "Podaj pierwszą liczbę : ";
        cin >> a;
    cout << "Podaj drugą liczbę : ";
        cin >> b;
    cout << "Podaj trzecią liczbę : ";
        cin >> c;
    
    if (a > b)
    {
        if (a > c)
        cout << "Największa liczba:" << a;
        
        else
        {
    cout << "Największa liczba:" << c;
    }
    }
    if (b > a)
    {
        if(b > c)
        cout << "Największa liczba:" << b;
        
        else
        {
                cout << "Największa liczba:" << c;
        }
    }
	return 0;
}

