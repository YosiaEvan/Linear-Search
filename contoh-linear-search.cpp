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
}

int main() {
    int array[] = {2, 4, 0, 1, 9};
    int key = 1;
    int n = sizeof(array)/sizeof(array[0]);

    return 0;
}