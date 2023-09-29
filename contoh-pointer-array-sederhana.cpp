/*
    Nama    : Yosia Evan
    NIM     : 2281020
*/

#include <iostream>
using namespace std;

int main() {
    int contoh[4] = {8,2,1,6}; // deklarasi array dengan nama contoh
    int *ptrContoh; // deklarasi variabel pointer yang akan menunjuk ke array contoh

    cout << "Menampilkan alamat elemen array menggunakan array dan operator referensi: " << endl;
    for (int i=0; i<4; i++) {
        cout << "&contoh[" << i << "] = " << &contoh[i] << endl;
    }

    cout << "Menampilkan alamat elemen array menggunakan pointer: " << endl;
    ptrContoh = contoh; // menyimpan alamat elemen pertama array contoh ke pointer ptrContoh
    for (int i=0; i<4; i++) {
        cout << "pointer + " << i << " = " << ptrContoh + i << endl;
    }

    cout << "Menampilkan nilai dari setiap elemen pada array contoh: " << endl;
    cout << "Akses berdasarkan indeks array: " << contoh[0] << endl;
    cout << "Akses menggunakan pointer: " << *ptrContoh << endl;
    ptrContoh = &contoh[1];
    cout << "Akses menggunakan pointer untuk elemen kedua dalam array: " << *ptrContoh << endl;

    return 0;
}