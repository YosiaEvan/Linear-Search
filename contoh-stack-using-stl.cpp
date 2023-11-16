#include <iostream>
#include <stack> //Standard template library yg menyediakan operasi stack
using namespace std;

//5 fungsi stack yang disediakan di STL:
//push(), pop(), top(), empty(), size()

void display(stack<string> mhs){
	while(!mhs.empty()){
		cout<<mhs.top()<<endl;
		mhs.pop();
	}
}

int main(){
	stack<string> mahasiswa;
	
	//menambahkan elemen di dalam stack
	mahasiswa.push("Valerie");
	mahasiswa.push("Gibrael");
	mahasiswa.push("Gracecia");
	mahasiswa.push("Ester");
	
	//menampilkan isi stack
	cout<<"Elemen dalam stack saat ini: \n";
	display(mahasiswa);
	cout<<"\n\nUkuran stack = "<<mahasiswa.size();
	//remove elemen dari stack
	mahasiswa.pop();
	
	cout<<"\n\nElemen dalam stack setelah pop: \n";
	display(mahasiswa);
	
	//int size = mahasiswa.size();
	cout<<"\n\nUkuran stack = "<<mahasiswa.size();
	
	return 0;
}