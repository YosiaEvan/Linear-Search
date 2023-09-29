/*
    Nama    : Yosia Evan
    NIM     : 2281020
*/

#include <iostream>
using namespace std;

int main(){
    int c; // variabel yang akan menyimpan satu nilai integer
    int *pc; // deklarasi variabel pointer

    c = 5; // assign nilai 5 ke variabel c

    // contoh penggunaan dari operator referensi (&)
    cout << "Alamat dari variabel c (&c) adalah " << &c << endl; // mengambil alamat dari variabel c
    cout << "Nilai dari variabel c adalah " << c << endl;

    pc = &c; // alamat dari variabel c akan disimpan di pointer pc
    c = 11;
    cout << "Alamat yang berada di variabel pointer pc = " << pc << endl;
    cout << "Nilai yang disimpan di alamat " << pc << " adalah " << *pc << endl;

    *pc = 7; // mengubah nilai yang berada di alamat yang ditunjuk oleh pointer pc
    cout << "Alamat yang berada di variabel pointer pc = " << pc << endl;
    cout << "Nilai yang disimpan di alamat " << pc << " adalah " << *pc << endl;
    cout << "Nilai dari variabel c saat ini adalah " << c << endl;

    return 0;
}