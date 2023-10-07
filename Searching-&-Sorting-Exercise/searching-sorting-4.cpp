#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan 10 elemen
    int array[] = {77, 42, 35, 12, 101, 5, 17, 1, 8, 90};
    int max;

    // Menampilkan isi array sebelum diurutkan
    cout << "Elemen sebelum diurutkan:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i] << "\t";
    }

    // Proses pengurutan
    for (int i = 0; i < 10-1; i++) {
        max = 10 - i - 1;
        for(int j = 0; j < max; j++) {
            if (array[j] > array[j+1]) { // "<" untuk ascending dan ">" untuk descending
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Menampilkan elemen setelah pengurutan
    cout << endl << "Elemen setelah diurutkan:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i] << "\t";
    }

    return 0;
}