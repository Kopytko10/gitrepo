/*
 * znaki.cpp
 */


#include <iostream>

using namespace std;

void anagramy(char w[], int r) {
    int i1, i2, i3, i4;
    i1 = i2 = i3 = i4 = 0;
    for (i1 = 0; i1 < r; i1++) {
        for (i2 = 0; i2 < r; i2++){
            for (i3 = 0; i3 < r; i3++){
                for (i4 = 0; i4 < r; i4++)
            if(i1 == i2 or i2 == i3 or i1 == i3 or i1 == i4 or i2 == i4) continue;
            cout << i1 << i2 << endl;
            }
        }
    }
}


int main(int argc, char **argv)
{
	const int rozmiar = 4;
    char wyraz[] = "ryba" ; // 4! = 24 
    anagramy(wyraz, rozmiar);
    
	return 0;
}

