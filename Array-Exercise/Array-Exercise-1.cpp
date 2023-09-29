/*
  Nama  : Yosia Evan
  NIM   : 2281020
*/

#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel n (jumlah index array) dan temp (tempat sementara untuk bilangan yang akan ditukar indexnya)
    int n;
    int temp;
    
    // Input jumlah bilangan
    cout << "Input jumlah bilangan (tidak lebih dari 50): ";
    cin >> n;
    cout << endl;
    
    // Deklarasi array arr dengan jumlah index sesuai nilai variabel n
    int arr[n];
    
    // Iterasi untuk menginput bilangan kedalam array arr
    for(int i=0; i<n; i++){
        cout << "Input bilangan ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    
    // Itersi untuk mengurutkan element dalam array arr (kecil => besar)
    for(int j=0; j<n; j++){
        for(int k=0; k<n-1; k++){
            if(arr[k]>arr[k+1]){
                temp = arr[k];
                arr[k] = arr[k+1];
                arr[k+1] = temp;
            }
        }
    }
    
    // Menampilkan element array arr yang terkecil dan terbesar
    cout << endl;
    cout << "Element array terkecil adalah " << arr[0] << endl;
    cout << "Element array terbesar adalah " << arr[n-1] << endl;
    
    return 0;
}
