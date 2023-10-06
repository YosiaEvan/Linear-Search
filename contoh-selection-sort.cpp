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

    return 0;
}