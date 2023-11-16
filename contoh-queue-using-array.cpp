#include <iostream>
using namespace std;

#define max 5 //max adalah var utk menyimpan ukuran array dan dibuat konstan nilainya dengan fungsi #define

int queue[max]; //deklarasi array sebagai antrian
//inisialisasi awal utk menyatakan queue masih kosong
int front = -1, rear = -1; //front = rear = -1

//fungsi utk cek apakah queue kosong
bool isEmpty(){
    if(front==-1 && rear==-1)
        return true;
    else
        return false;
}

//fungsi utk cek apakah queue penuh
bool isFull(){
    if(rear==max-1)
        return true;
    else
        return false;
}

//fungsi utk menambahkan elemen ke dalam queue
void enqueue(int x){
    if(isFull()){
        cout<<"Antrian penuh. Tidak bisa menambahkan elemen."<<endl;
        return;
    }else if(isEmpty()){ //apabila elemen yang akan ditambahkan adalah elemen pertama
        front = 0;
        rear = 0; //atau front = rear = 0
    }else{ //apabila elemen yang akan ditambahkan bukan elemen pertama dalam queue
        rear++;
    }
    queue[rear] = x;
    cout<<x<<" telah diinput ke dalam antrian."<<endl;
}

//fungsi untuk mengeluarkan elemen dari antrian
void dequeue(){
    if(isEmpty()){
        cout<<"Antrian kosong, tidak ada elemen yang perlu dihapus."<<endl;
        return;
    }else if(front==rear){ //apabila front & rear sudah menunjuk ke elemen terakhir dalam antrian
        front = -1;
        rear = -1;
    }else{//apabila antrian tidak kosong dan elemen yang ditunjuk bukan elemen terakhir 
        cout<<queue[front]<<" telah dikeluarkan dari antrian."<<endl;
        front++;
    }
}

//fungsi untuk display elemen
void display(){
    if(isEmpty()){
        cout<<"Antrian kosong, tidak ada elemen yang bisa ditampilkan."<<endl;
    }else
    {
        cout<<"Elemen dalam antrian adalah ";
        for(int i = front;i<=rear;i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}

int main(){
    int num; //var yang akan menyimpan nilai yang diinput oleh user
    int pilihan; //var untuk menyimpan pilihan menu

    do{
        cout<<"===== Menu Queue =====\n";
        cout<<"1. Display\n"
            <<"2. Enqueue\n"
            <<"3. Dequeue\n"
            <<"4. Keluar\n";
        cout<<"Masukkan pilihan anda: ";
        cin>>pilihan;

        switch (pilihan)
        {
            case 1:
                display();
                break;
            case 2:
                cout<<"Input bilangan yang akan ditambahkan ke dalam antrian: ";
                cin>>num;
                enqueue(num);
                break;
            case 3:
                dequeue();
                break;
            default:
                cout<<"Pilihan yang anda masukkan salah."<<endl;
        }
    }while(pilihan!=4);

    return 0;
}
