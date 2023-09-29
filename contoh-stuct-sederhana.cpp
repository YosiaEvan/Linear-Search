/*
    Nama    : Yosia Evan
    NIM     : 2281020
*/

#include <iostream>
using namespace std;

// Definisikan struktur/struct dengan nama mahasiswa untuk menyimpan data mahasiswa
struct mahasiswa{
    // Member dari struct mahasiswa
    char nama[100];
    int umur;
    float ipk;
};

/*
mahasiswa dataMahasiswa(mahasiswa mhs1){
    // Input data mahasiswa
    cout << "Masukkan data mahasiswa berikut ini:" << endl;
    cout << "Input nama mahasiswa   : ";
    cin >> mhs1.nama;
    cout << "Input umur mahasiswa   : ";
    cin >> mhs1.umur;
    cout << "Input ipk mahasiswa    : ";
    cin >> mhs1.ipk;

    return mhs1;
}
*/

/*
void display(mahasiswa mhs1){
    // Menampilkan informasi yang telah diinput
    cout << endl << "----- Informasi Mahasiswa -----" << endl;
    cout << "Nama   : " << mhs1.nama << endl;
    cout << "Umur   : " << mhs1.umur << endl;
    cout << "IPK    : " << mhs1.ipk << endl;
}
*/

int main(){
    /*
    // Deklarasi variabel dari struct mahasiswa
    mahasiswa mhs;
    mhs = dataMahasiswa(mhs);
    display(mhs);
    */

    /*
    // Input data mahasiswa
    cout << "Masukkan data mahasiswa berikut ini:" << endl;
    cout << "Input nama mahasiswa   : ";
    cin >> mhs1.nama;
    cout << "Input umur mahasiswa   : ";
    cin >> mhs1.umur;
    cout << "Input ipk mahasiswa    : ";
    cin >> mhs1.ipk;
    */

    /*
    // Menampilkan informasi yang telah diinput
    cout << endl << "----- Informasi Mahasiswa -----" << endl;
    cout << "Nama   : " << mhs1.nama << endl;
    cout << "Umur   : " << mhs1.umur << endl;
    cout << "IPK    : " << mhs1.ipk << endl;
    */

    /*
    mahasiswa mhs[3] = {{"Joshua",19,3.2},{"Boy",19,4.0},{"Yefta",18,3.7}};
    */

    mahasiswa mhs[3];

    // Input data mahasiswa
    for(int i = 0; i < 3; i++){
        cout << "Masukkan data mahasiswa ke-" << i+1 << endl;
        cout << "Input nama mahasiswa   : ";
        cin >> mhs[i].nama;
        cout << "Input umur mahasiswa   : ";
        cin >> mhs[i].umur;
        cout << "Input ipk mahasiswa    : ";
        cin >> mhs[i].ipk;
    }

    // Menampilkan informasi yang telah diinput
    cout << endl << "----- Informasi Mahasiswa -----" << endl;
    for(int i = 0; i < 3; i++){
        cout << "Data Mahasiswa ke-" << i+1 << endl;
        cout << "Nama   : " << mhs[i].nama << endl;
        cout << "Umur   : " << mhs[i].umur << endl;
        cout << "IPK    : " << mhs[i].ipk << endl;
    }

    return 0;
}