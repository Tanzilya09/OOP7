#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, ("rus"));  
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;
    float* arr = new float[n];

    cout << "Введите " << n << " чисел:\n";
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << ": ";
        cin >> *(arr + i); 
    }
    float sum = 0;
    for (float* p = arr; p < arr + n; ++p) {
        sum += *p;
    }

    float average = sum / n;
    cout << "Среднее арифметическое: " << average << endl;
    delete[] arr;

    return 0;
}
