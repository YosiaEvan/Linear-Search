/*
    Nama    : Yosia Evan
    NIM     : 2281020
*/

#include <iostream>
using namespace std;

#define max 6

int stack[max];
int top = -1;

bool isEmpty() {
    if(top == -1) {
        return true;
    } else {
        return false;
    }
}

bool isFull() {
    if(top == max-1) {
        return true;
    } else {
        return false;
    }
}

void push(int x) {
    if(isFull()) {
        cout << "Stack full. No element can be added." << endl;
        return;
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if(isEmpty()) {
        cout << "Stack empty. No element can be removed." << endl;
        return;
    } else {
        int temp;
        temp = stack[top];
        top = top - 1;
    }
}

void display() {
    if(isEmpty()) {
        cout << "Stack empty." << endl;
        return;
    } else {
        int sum = 0;
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
            sum += stack[i];
        }
        double average = static_cast<double>(sum)/(top+1);
        cout << endl << "Average of the said stack values: " << average;
        cout << endl;
    }
}

int main() {
    int num;
    int pilihan;
    int elemenTop;

    do {
        cout << "===== Menu Stack =====" << endl;
        cout << "1. Display" << endl
             << "2. Push" << endl 
             << "3. Pop" << endl  
             << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                display();
                break;
            case 2:
                cout << "Input some elements onto the stack: ";
                cin >> num;
                push(num);
                break;
            case 3:
                pop();
                break;
            default:
                cout << "Pilihan yang anda masukkan salah." << endl;
        }
    } while(pilihan != 4);

    return 0;
}