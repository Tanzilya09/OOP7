#include <iostream>
using namespace std;

const int MEMORY_SIZE = 100;
float fmemory[MEMORY_SIZE]; 
int pmemory[MEMORY_SIZE];   
int fmem_top = 0;           
int pmem_top = 0;       

class Float {
public:
    int addr; 
    Float(float value) {
        fmemory[fmem_top] = value; 
        addr = fmem_top;           
        pmemory[pmem_top] = addr;  
        fmem_top++;                
        pmem_top++;                
    }

    int operator&() {
        return addr;
    }
};

class ptrFloat {
public:
    int addr; 
    ptrFloat(int p) {
        addr = p; 
    }

    float& operator*() {
        return fmemory[pmemory[addr]]; 
    }
};

int main() {
    setlocale(LC_ALL, ("rus"));
    Float var1 = 1.234f;  
    Float var2 = 5.678f;  

    ptrFloat ptr1 = &var1; 
    ptrFloat ptr2 = &var2; 

    cout << " *ptr1 = " << *ptr1 << endl; 
    cout << " *ptr2 = " << *ptr2 << endl; 

    *ptr1 = 7.123f; 
    *ptr2 = 8.456f; 

    cout << " *ptr1 = " << *ptr1 << endl; 
    cout << " *ptr2 = " << *ptr2 << endl; 

    return 0;
}
