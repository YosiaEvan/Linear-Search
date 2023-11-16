#include <iostream>
using namespace std;

#define max 5 //definisi nilai tetap dari ukuran array

int queue[max];
int front = -1, rear = -1; //front = rear = -1; --> menyatakan queue masih kosong

//fungsi untuk cek apakah queue kosong
bool isEmpty(){
	if(front == -1 && rear == -1)
		return true;
	else
		return false;
}

//fungsi untuk cek apakah queue penuh
bool isFull(){
	if((rear+1)%max == front)
		return true;
	else
		return false;
}

//fungsi untuk menambahkan elemen ke dalam queue
void enqueue(int x){
	if(isFull()){
		cout<<"Antrian sudah penuh. Tidak bisa menambahkan elemen.\n";
		return; //berarti program akan keluar dari fungsi enqueue dan tidak menjalankan sisa coding dalam fungsi		
	} else if(isEmpty()){ //kondisi ketika elemen pertama akan masuk ke antrian
		front = 0;
		rear = 0; //front = rear = 0;
	} else{
		rear = (rear+1) % max;
	}
	queue[rear] = x;
	cout<<x<<" sudah berhasil masuk ke dalam antrian.\n";
	cout<<"Nilai rear saat ini = "<<rear<<endl;
}

//fungsi untuk remove elemen dari antrian
void dequeue(){
	if(isEmpty()){
		cout<<"Antrian kosong. Tidak ada yang perlu dihapus.\n";
		//return; //keluar dari fungsi dequeue
	} else if(front == rear){ //kondisi ketika tersisa satu elemen atau sudah menunjuk ke elemen terakhir
		//membuat antrian menjadi kosong
		front = -1;
		rear = -1; //front = rear = -1; 
	} else{
		cout<<queue[front]<<" sudah keluar dari antrian.\n"; //menyatakan elemen yang sudah keluar dari antrian/queue
		front = (front + 1) % max;
	}
	cout<<"Nilai front saat ini = "<<front<<endl;
}

//fungsi untuk menampilkan isi dari queue
void display(){
	int i;
	if(isEmpty())
		cout<<"Antrian kosong. Silahkan input elemen ke antrian.\n";
	else{
		cout<<"Elemen yang ada dalam antrian saat ini adalah ";
		for(i=front;i!=rear;i = (i+1)%max){
			cout<<queue[i]<<" ";
		}
		cout<<queue[i];
		cout<<endl;
	}
}

int main(){
	int num; //var untuk menyimpan nilai yang diinput oleh user
	int pilihan; //var untuk menyimpan pilihan menu
	
	do{
		cout<<"=== Menu Queue ==="<<endl;
		cout<<"1. Display \n"
			<<"2. Enqueue \n"
			<<"3. Dequeue \n"
			<<"4. Keluar \n";
		cout<<"Masukkan pilihan anda: ";
		cin>>pilihan;
		
		switch(pilihan){
			case 1:
				display();
				break;
			case 2:
				cout<<"Silahkan input sebuah bilangan: ";
				cin>>num;
				enqueue(num);
				break;
			case 3:
				dequeue();
				break;
			default:
				cout<<"Pilihan yang anda masukkan salah!";
		}
	}while(pilihan!=4);
	return 0;
}