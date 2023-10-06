// Contoh implementasi algoritma Selection Sort

#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi dari array
void display(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << "\t";
    }
}

// Fungsi swapping
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Fungsi selection sort
void selectionSort (int array[], int size) {
    for (int i = 0; i < size; i++) {
        // Ambil nilai dari i dan simpan sebagai elemen terkecil
        int min =i;
        for (int j = i+1; j < size; j++) {
            // Lakukan perbandingan antara elemen terkecil (min) dengan elemen berikutnya
            if (array[j] < array[i]) {
                min = j;
            }
            swap(&array[min], &array[i]);
        }
    }
}

int main() {
    // Deklarasi array dengan 5 elemen
    int array[] = {20, 12, 18, 15, 2};
    // Mencari ukuran array
    int size = sizeof(array)/sizeof(array[0]);

    // Display array sebelum diurutkan
    cout << "Isi array sebelum diurutkan:" << endl;
    display(array, size);
    // Urutkan array dengan memanggil fungsi selection sort
    selectionSort(array, size);
    // Display array setelah diurutkan
    cout << "Isi array setelah diurutkan:" << endl;
    display(array, size);

    return 0;
}