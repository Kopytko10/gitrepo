/*
 * sortowanie.cpp
 */
 #include <iostream>
#include <cstdlib>

using namespace std;


void wypelnij(int tab [], int roz) {
    srand(time(NULL)); // inicjacja generatora liczb pseudolosowych
    cout << "Wprowadż " << roz << " liczb: " << endl;
    for(int i=0; i<roz; i++){
        tab[i] = rand() % 101; // liczby od zera do 100
        }
    }


void drukuj(int tab [], int roz) {
    
    for(int i=0; i<roz; i++){
        cout << tab[i] << " ";
        }
    }

void zamien1(int &a, int &b){ //przekazanie elementów przez referencję 
    //cout << a << " " << b << endl;
    int tmp = a;
    a = b;
    b = tmp;
    //cout << a << " " << b << endl;
    
    }    
    
void sort_bubble(int tab[], int n){
    for(int j = n-1; j < 0; j--){
        cout << j << " ";
        for(int i = 0; i < j; j++){
            if(tab[i] > tab[i+1])
                zamien1(tab[i], tab[i+1]);
            }
        }
    }

void sort_selection(int tab[], int n){
    int i, j, k;
    for (i = 0; i < n; i++){
        k = i; //indeks najmniejszego elementu 
        for (j = i + 1; j < n; j++)
            if (tab[j] < tab[k])
                k = j;
    }  
    zamien1(tab[i], tab[k]);
}

void sort_insert(int tab[], int n){
    int i, k, el;
    for (i = 1; i < n; i++){
        el = tab[i];
        k = i - 1; //indeks , z którą porównujemy element 
        while(k>=0 && tab[k]>el) {
            tab[k+1] = tab[k];
            k--;            
        }  
       tab[k+1]=el;
       
    }
}

int main(int argc, char **argv)
{
	int roz = 20;
    int tab[roz];
    wypelnij(tab, roz);
    drukuj(tab, roz);
    cout << endl << endl;
    //sort_bubble(tab, roz);
    //sort_selection(tab, roz);
    sort_insert(tab, roz);
    drukuj(tab, roz);
    //zamien1(5, 10);
    cout << endl;
    return 0;
}
