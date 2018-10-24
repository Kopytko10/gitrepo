/*
 * liczby23.cpp 
 */


#include <iostream>
using namespace std;
int liczby2() {
    
    int ile = 0; //deklaracja
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (i != j) {
                cout << i << j << " ";
                ile++;
            }
        
        }
    
    }
    return ile;
} 

int liczby3() {
    int ile = 0;
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            for (int k = 1; k < 10; k++){
                if (i != j && i != k && k != j){
                    cout << i << j << k <<" ";
                    ile++;
                }
            }
        }
    }
    return ile;
}

int main(int argc, char **argv)
{
	cout << "\n\nLiczb 2-cyfrowych: " << liczby2();
    cout << "\n\nLiczb 3-cyfrowych: " << liczby3();
    
	return 0;
}

