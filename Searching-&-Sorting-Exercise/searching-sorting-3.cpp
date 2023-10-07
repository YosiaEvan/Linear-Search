// Program Insertion Sort

#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan 10 elemen
    int array[] = {77, 42, 35, 12, 101, 5, 17, 1, 8, 90};
    // Mencari ukuran array
    int size = sizeof(array)/sizeof(array[0]);

    // Menampilkan isi array sebelum diurutkan
    cout << "Elemen sebelum diurutkan:" << endl;
    for(int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }

    // Proses insertion sort
    for(int i = 1; i < size; i++) {
        for(int j = i; j > 0; j--) {
            if(array[i] < array[i-1]) {
                int temp = array[i];
                array[i] = array[i-1];
                array[i-1] = temp;
            }
        }
    }

    // Menampilkan isi array setelah diurutkan
    cout << "Elemen sebelum diurutkan:" << endl;
    for(int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }

    return 0;
}