#include <iostream>
using namespace std;

// definisi fungsi untuk pencarian linear
// fungis tersebut memiliki 3 parameter yaitu:
// int array adalah array yang akan menyimpan elemen-elemen yang ada
// int n adalah variabel yang menentukan size of array
// int key adalah variabel yang akan menyimpan nilai yang ingin dicari

int search(int array[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(array[i] == key) {
            return i; // mengembalikan nilai index
        }
    }
    return -1;
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int find = 1;
    int n = sizeof(array)/sizeof(array[0]); // menentukan ukuran array menggunakan fungsi sizeof

    int hasil = search(array, n, find);

    // operator ternary
    // (expresion) ? value if expresion is true : value if expresion is false
    (hasil == -1) ? cout << "Elemen tidak ditemukan dalam array." : cout << "Elemen ditemukan pada index ke-" << hasil;

    return 0;
}