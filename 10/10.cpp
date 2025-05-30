﻿#include <iostream>
using namespace std;

const int NUMARRAYS = 10;  
const int MAXSIZE = 10;    

int main() {
    setlocale(LC_ALL, ("rus"));
    int* ap[NUMARRAYS];

    for (int j = 0; j < NUMARRAYS; j++) {
        ap[j] = new int[MAXSIZE];  
    }

    for (int j = 0; j < NUMARRAYS; j++) {
        for (int k = 0; k < MAXSIZE; k++) {
            ap[j][k] = j * 10 + k;  
        }
    }
    for (int j = 0; j < NUMARRAYS; j++) {
        cout << "Массив " << j << ": ";
        for (int k = 0; k < MAXSIZE; k++) {
            cout << *(*(ap + j) + k) << " ";  
        }
        cout << endl;
    }
    for (int j = 0; j < NUMARRAYS; j++) {
        delete[] ap[j];  
    }

    return 0;
}
