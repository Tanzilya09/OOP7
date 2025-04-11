#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, ("rus"));  
    const int numArrays = 10;
    const int arraySize = 10;  

    int a0[arraySize], a1[arraySize], a2[arraySize], a3[arraySize];
    int a4[arraySize], a5[arraySize], a6[arraySize], a7[arraySize];
    int a8[arraySize], a9[arraySize];

    int* ap[numArrays] = { a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 };
    for (int i = 0; i < numArrays; ++i) {
        for (int j = 0; j < arraySize; ++j) {
            ap[i][j] = i * 10 + j;
        }
    }

    for (int i = 0; i < numArrays; ++i) {
        cout << "Массив " << i << ": ";
        for (int j = 0; j < arraySize; ++j) {
            cout << ap[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
