/*
  Nama  : Yosia Evan
  NIM   : 2281020
*/

#include <iostream>
using namespace std;

int main() {
    // Deklarasi array arr dengan jumlah index 10 dan variabel ganjil (jumlah bilangan ganjil pada array)
    int arr[10];
    int ganjil;

    // Iterasi untuk menginput element pada array arr
    for(int i=0; i<10; i++){
        cout << "Bilangan ke-" << i+1 << "      : ";
        cin >> arr[i];
    }

    // Iterasi untuk menentukan jumlah bilangan ganjil pada array
    for(int j=0; j<10; j++){
        if(arr[j] % 2 == 1){
            ganjil++;
        }
    }

    // Menampilkan jumlah bilangan ganjil pada array arr
    cout << endl << "Jumlah bilangan ganjil: " << ganjil;
    
    return 0;
}
