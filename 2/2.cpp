#include <iostream>
#include <cstring>
#include <cctype> 
using namespace std;

class String {
private:
    enum { SZ = 80 };
    char str[SZ];
public:
    String() {
        str[0] = '\0';
    }

    String(const char s[]) {
        strncpy(str, s, SZ - 1);
        str[SZ - 1] = '\0';
    }

    void display() const {
        cout << str << endl;
    }

    void upit() {
        for (int i = 0; str[i] != '\0'; ++i) {
            str[i] = toupper(str[i]);
        }
    }
};

int main() {
    setlocale(LC_ALL, ("rus")); 
    String s1("hello, world!");
    cout << "Оригинальная строка: ";
    s1.display();

    s1.upit();

    cout << "После upit(): ";
    s1.display();

    return 0;
}
