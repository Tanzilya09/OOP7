#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    setlocale(LC_ALL, ("rus"));
    char str1[100], str2[100];
    char* p1 = str1;
    char* p2 = str2;

    cout << "Введите первую строку: ";
    cin.getline(p1, 100);

    cout << "Введите вторую строку: ";
    cin.getline(p2, 100);
    int result = strcmp(p1, p2);

    if (result == 0) {
        cout << "Строки одинаковые." << endl;
    }
    else if (result < 0) {
        cout << "Первая строка меньше второй." << endl;
    }
    else {
        cout << "Первая строка больше второй." << endl;
    }

    return 0;
}
