#include <iostream>
using namespace std;

const int NUMARRAYS = 10;  
const int MAXSIZE = 10;    

class ArrayWrapper {
private:
    int* ap[NUMARRAYS];  

public:
    ArrayWrapper() {
        for (int j = 0; j < NUMARRAYS; j++) {
            ap[j] = new int[MAXSIZE];  
        }
    }

    int& operator[](int index) {
        int arrayIndex = index / MAXSIZE; 
        int elementIndex = index % MAXSIZE;  
        return ap[arrayIndex][elementIndex];
    }

    ~ArrayWrapper() {
        for (int j = 0; j < NUMARRAYS; j++) {
            delete[] ap[j]; 
        }
    }
};

int main() {
    setlocale(LC_ALL, ("rus")); 
    ArrayWrapper a;  

    for (int i = 0; i < NUMARRAYS * MAXSIZE; i++) {
        a[i] = i;  
    }

    for (int i = 0; i < NUMARRAYS * MAXSIZE; i++) {
        cout << a[i] << " "; 
        if ((i + 1) % MAXSIZE == 0) {
            cout << endl;
        }
    }

    return 0;
}
