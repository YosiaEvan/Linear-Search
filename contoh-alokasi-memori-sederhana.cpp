/*
    Contoh Program untuk alokasi memori sederhana menggunakan new dan delete operator dengan C++
*/

#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel pointer dengan tipe integer dan float
    int *pointerInt; // dialokasikan oleh OS ke memory stack pada compile time
    float *pointerFloat; // dialokasikan oleh OS ke memory stack pada compile time

    // Alokasi memori secara dinamis
    pointerInt = new int; // pointer akan menunjuk ke satu alamat di memori heap
    pointerFloat = new float; // pointer akan menunjuk ke satu alamat di memori heap

    cout << "Alamat yang saat ini disimpan oleh pointerInt = " << pointerInt << endl;
    cout << "Alamat yang saat ini disimpan oleh pointerFloat = " << pointerFloat << endl;
    cout << "Nilai yang saat ini disimpan oleh pointerInt = " << *pointerInt << endl;
    cout << "Nilai yang saat ini disimpan oleh pointerFloat = " << *pointerFloat << endl;

    // Assign nilai ke memori tempat yang ditunjuk oleh masing-masing pointer di atas menggunakan dereference operator (*)
    *pointerInt = 57;
    *pointerFloat = 34.8;

    cout << "Setelah assign nilai ke variabel pointer:" << endl;
    cout << "Nilai yang saat ini disimpan oleh pointerInt = " << *pointerInt << endl;
    cout << "Nilai yang saat ini disimpan oleh pointerFloat = " << *pointerFloat << endl;

    // Dealokasi memori
    // Menghapus nilai yang disimpan di alamat yang ditunjuk oleh pointerInt dan pointerFloat
    delete pointerInt;
    delete pointerFloat;

    return 0;
}