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
int topOfStack() {
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

// Fungsi untuk menampilkan stack
void display() {
    if(isEmpty()) {
        cout << "Stack kosong." << endl;
        return;
    } else {
        for(int i = top; i >= 0; i--) {
            cout << endl << stack[i];
        }
        cout << endl;
    }
}

int main() {
    int num; // Variabel yang akan menyimpan nilai yang diinput user
    int pilihan; // Variabel untuk menyimpan pilihan menu
    int elemenTop; // Variabel untuk menyimpan elemen teratas dalam top

    do {
        cout << "===== Menu Stack =====" << endl;
        cout << "1. Display" << endl
             << "2. Push" << endl 
             << "3. Pop" << endl 
             << "4. Top of Stack" << endl 
             << "5. Keluar" << endl;
        cout << "Masukkan pilihan anda: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                display();
                break;
            case 2:
                cout << "Input bilangan yang akan ditambahkan ke dalam stack: ";
                cin >> num;
                push(num);
                break;
            case 3:
                pop();
                break;
            case 4:
                elemenTop = topOfStack();
                cout << "Elemen teratas dalam stack saat ini adalah " << elemenTop << endl;
                break;
            default:
                cout << "Pilihan yang anda masukkan salah." << endl;
        }
    } while(pilihan != 5);
    cout << "Eelmen terakhir dalam stack secara aktual : " << stack[max-1] << endl;

    return 0;
}