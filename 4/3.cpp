#include <iostream>
#include <cstring> 
using namespace std;

void bsort(char* arr[], int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
            if (strcmp(arr[j], arr[k]) > 0) {
                char* temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, ("rus"));
    const int DAYS = 7;
    char* days[DAYS] = {
        (char*)"Wednesday",
        (char*)"Monday",
        (char*)"Friday",
        (char*)"Sunday",
        (char*)"Tuesday",
        (char*)"Saturday",
        (char*)"Thursday"
    };

    cout << "До сортировки:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << days[i] << endl;
    }
    bsort(days, DAYS);

    cout << "\nПосле сортировки:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << days[i] << endl;
    }

    return 0;
}
