// Buat program untuk menjumlahkan 5 bilangan dalam array dimana setiap bilangan diinput oleh user

#include <iostream>
using namespace std;

int main(){
    int bilangan[5]; // deklarasi array untuk simpan 5 bilangan
    int hasil; // deklarasi variabel untuk simpan hasil penjumlahan
    
    cout << "Masukkan 5 bilangan: " << endl;
    for(int i=0; i<5; i++){
            cout << "Input bilangan ke-" << i+1;
            cin >> bilangan[i];
            hasil = hasil + bilangan[i];
    }
    cout << "Hasil penjumlahan 5 bilangan adalah " << hasil;
}
