/*
 * cw_petle.cpp
 */


#include <iostream>
using namespace std;

void cw01(){
int n;
int suma = 0; 

while (suma < 75) {
    cout << "Podaj liczbę" << endl;
    cin >> n;
    suma = suma + n;
    
    }
    cout << "Suma liczb: " << suma;
}

void cw02() {
int n;    
int m;
cout << "Podaj pierwszą granicę przedziału: ";
cin >> n;
cout << "Podaj drugą granicę przedziału: ";
cin >> m;
for(int i = n; i <= m; i++) {
    cout << i << " ";
}
    
    
}


void cw03() {
int kwadrat;
int n;
cout << "Podaj granicę: ";
cin >> n;
int i;
    for(i = 0; i <= n; i++) { 
        kwadrat = i * i;
        cout << kwadrat << endl;
    }
    

}


void cw04() {
    int i;
for (int i = 10; i < 100; i++) {
    if ((i % 3 = 0) && (i % 2 = 0)); 
    cout << i << endl;
    }    
}
    
    

int main(int argc, char **argv)
{
	//cw01();
    //cw01();
    cw03();
	return 0;
}

