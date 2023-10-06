// Program untuk implementasi Bubble Sort sederhana

#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan 6 elemen
    int array[] = {77, 42, 35, 12, 101, 5};

    // Menampilkan isi array sebelum diurutkan
    cout << "Elemen sebelum diurutkan:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << array[i] << "\t";
    }

    // Proses pengurutan
    for (int i = 0; i < 6; i++) {
        // Pair-wise comparison process
        for(int j = i+1; j < 6; j++) {
            // Compare and swap
            if (array[j] > array[i]) {
                int temp = array[i]; // Temporary variable
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    // Menampilkan elemen setelah pengurutan
    cout << endl << "Elemen setelah diurutkan:" << endl;
    for (int i = 0; i < 6; i++) {
        cout << array[i] << "\t";
    }

    return 0;
}