#include <iostream>
using namespace std;

struct Node{
	int data; //variabel untuk menyimpan nilai yang dimasukkan oleh user
	Node *next; //variabel pointer untuk menyimpan alamat dari node berikutnya
};

struct Node *head; //variabel pointer untuk menyimpan alamat dari elemen/node yang pertama yang ada di dalam list

void insertDiAwal(int bilangan){
	Node *nodeBaru = new Node(); //alokasi tempat di memori untuk node baru yang ditambahkan ke dalam list
	nodeBaru -> data = bilangan;
	nodeBaru -> next = head;
	head = nodeBaru;	
}

void insertDiAkhir(int bilangan){
	Node *nodeBaru = new Node();
	Node *temp = head;
	nodeBaru -> data = bilangan; 
	nodeBaru -> next = NULL;
	
	if(head==NULL){
		head = nodeBaru; 
		return;
	}

	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = nodeBaru; 
	return;
}

//insert elemen berdasarkan posisi
void insertDiTengah(int bilangan, int pos){
	Node *nodeBaru = new Node();
	nodeBaru->data = bilangan;
	nodeBaru->next = NULL;
	
	if(pos==1){
		nodeBaru->next = head;
		head = nodeBaru;
		return;
	}
	Node *temp = head;
	for(int i=0;i<pos-2;i++){
		temp=temp->next;
	}
	nodeBaru->next = temp->next;
	temp->next = nodeBaru;
}

void hapus(int pos){
	Node *temp = head;
	if(pos==1){
		head = temp->next;
		delete temp;
		return;
	}
	for(int i=0;i<pos-2;i++){
		temp=temp->next;
	}
	Node *temp1 = temp->next;
	temp->next = temp1->next;
	delete temp1;
}

//fungsi untuk traverse/menelusuri elemen dalam list
void display(){
	Node *temp = head;
	cout << "Elemen dalam list adalah ";
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<temp->next;
	cout<<endl;
}

int main(){
	head = NULL; //menandakan list masih kosong
	//Node *nodebaru;
	//cout<<nodebaru<<endl;
	int posisi;
	//display();
	insertDiAwal(4);
	display();
	insertDiAwal(8);
	insertDiAwal(3);
	//output: 3 8 4
	insertDiTengah(6,2); //3 6 8 4
	insertDiTengah(1,4); //3 6 8 1 4
	insertDiAkhir(5); //3 6 8 1 4 5
	display();
	//cout<<"Masukkan posisi elemen yang ingin dihapus: ";
	//cin>>posisi;
	//hapus(posisi);
	display();
	return 0;
}