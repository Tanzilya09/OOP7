#include <iostream>
#include <string>
using namespace std;

class person {
private:
    string name;
    float salary;

public:
    void setData() {
        cout << "Введите имя: ";
        cin >> name;
        cout << "Введите зарплату: ";
        cin >> salary;
    }

    void printData() const {
        cout << "Имя: " << name << ", зарплата: " << salary << endl;
    }

    float getSalary() const {
        return salary;
    }
};

void salsort(person** pp, int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
            if ((*(pp + j))->getSalary() > (*(pp + k))->getSalary()) {
                person* temp = *(pp + j);
                *(pp + j) = *(pp + k);
                *(pp + k) = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, ("rus"));   
    const int SIZE = 3;
    person* persPtr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        persPtr[i] = new person;
        persPtr[i]->setData();
    }

    salsort(persPtr, SIZE);

    cout << "\nСортировка по зарплате:\n";
    for (int i = 0; i < SIZE; i++) {
        persPtr[i]->printData();
    }

    for (int i = 0; i < SIZE; i++) {
        delete persPtr[i];
    }

    return 0;
}
