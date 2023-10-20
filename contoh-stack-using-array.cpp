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

// Fungsi untuk menambahkan elemen ke dalam stack
void push(int x) {
    if(isFull()) {
        cout << "Stack penuh. Tidak dapat menambahkan elemen." << endl;
        return;
    } else {
        top++; // Atau top = top+1 atau top += 1
        stack[top] = x;
        cout << x << " sudah berhasil ditambahkan ke dalam stack." << endl;
    }
}

// Fungsi untuk mengeluarkan elemen dari stack
void pop() {
    if(isEmpty()) {
        cout << "Stack kosong. Tidak ada elemen yang dapat dikeluarkan." << endl;
        return;
    } else {
        int temp; // Variabel temporar untuk menyimpan nilai yang akan dikeluarkan
        temp = stack[top];
        top = top - 1; // Atau top--; atau top -= 1;
        cout << temp << " sudah dikeluarkan dari stack." << endl;
    }
}