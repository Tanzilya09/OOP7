#include <iostream>
#include <string>
#include <locale>
using namespace std;

const char R[] = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ";

int getRus(char c) {
    c = toupper((unsigned char)c);
    for (int i = 0; R[i] != '\0'; ++i) {
        if (R[i] == c) {
            return i;
        }
    }
    return -1; 
}

int strcmp1(const string& s1, const string& s2) {
    int len = min(s1.length(), s2.length());
    for (int i = 0; i < len; ++i) {
        int index1 = getRus(s1[i]);
        int index2 = getRus(s2[i]);
        if (index1 < index2) return -1;
        if (index1 > index2) return 1;
    }
    if (s1.length() < s2.length()) return -1;
    if (s1.length() > s2.length()) return 1;
    return 0;
}

int main() {
    setlocale(LC_ALL, ("rus")); 
    string s1 = "песня";
    string s2 = "яблоко";
    cout << "Сравнивает слова " << s1 << " и " << s2 << ": " << endl;
    cout << strcmp1(s1, s2) << endl;
    return 0;
}

