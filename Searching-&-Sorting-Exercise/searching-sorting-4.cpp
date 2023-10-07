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
    for(int i = 0; i < 10-1; i++) {
        max = 10 - i - 1;
        cout << endl << "Pass ke-" << i+1 << ": " << endl;
        for(int j = 0; j < max; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
            cout << "Perbandingan ke-" << j+1 << ": ";
            for(int k = 0; k < 10; k++) {
                cout << array[k] << "\t";
            }
            cout << endl;
        }
    }

    // Menampilkan elemen setelah pengurutan
    cout << endl << "Elemen setelah diurutkan:" << endl;
    for(int i = 0; i < 10; i++) {
        cout << array[i] << "\t";
    }

    return 0;
}