#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan 10 elemen
    int array[] = {77, 42, 35, 12, 101, 5, 17, 1, 8, 90};
    int high;

    // Menampilkan isi array sebelum diurutkan
    cout << "Elemen sebelum diurutkan:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i] << "\t";
    }

    // Proses pengurutan
    for (int i = 0; i < 10; i++) {
        for(int j = i+1; j < 10-i; j++) {
            if (array[j] < array[i]) { // "<" untuk ascending dan ">" untuk descending
                high = i;
            }
            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    // Menampilkan elemen setelah pengurutan
    cout << endl << "Elemen setelah diurutkan:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i] << "\t";
    }

    return 0;
}