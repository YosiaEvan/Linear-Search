// Ini adalah program implementasi Stack menggukan Array

#include <iostream>
using namespace std;

#define max 5 // Definisi ukuran array : nilai max menjadi konstan

int stack[max]; // Deklarasi array sebagai stack dengan ukuran/size 5
int top = -1; // Inisialisasi top untuk menyatakan stack masih kosong

// Definisi fungsi-fungsi untuk operasi-operasi Stack

// Fungsi untuk cek apakah stack kosong
bool isEmpty() {
    if(top == -1) {
        return true;
    } else {
        return false;
    }
}

// Fungsi untuk cek apakah stack full
bool isFull() {
    if(top == max-1) {
        return true;
    } else {
        return false;
    }
}

// Fungsi untuk mengambil nilai elemen teratas dalam stack
int totOfStack() {
    return stack[top];
}