#include <iostream>
using namespace std;

#define max 6

int stack[max];
int top = -1;

bool isEmpty() {
    if (top == -1) {
        return true;
    } else {
        return false;
    }
}

bool isFull() {
    if (top == max - 1) {
        return true;
    } else {
        return false;
    }
}

void push(int x) {
    if (isFull()) {
        cout << "Stack full. No element can be added." << endl;
        return;
    } else {
        top++;
        stack[top] = x;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack empty. No element can be removed." << endl;
        return;
    } else {
        int temp;
        temp = stack[top];
        top = top - 1;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack empty." << endl;
        return;
    } else {
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

void displayReverse() {
    if (isEmpty()) {
        cout << "Stack empty." << endl;
        return;
    } else {
        int temp[max];
        // temp[0] = stack[top];
        // temp[1] = stack[top-1];
        // temp[2] = stack[top-2];
        // temp[3] = stack[top-3];
        for (int i = 0; i <= top; i++) {
            temp[i] = stack[top-i];
            cout << temp[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int num;
    int pilihan;

    do {
        cout << "===== Menu Stack =====" << endl;
        cout << "1. Display" << endl
             << "2. Push" << endl
             << "3. Pop" << endl
             << "4. Display Reverse" << endl
             << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> pilihan;

        switch (pilihan) {
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
            case 4:
                displayReverse();
                break;
            default:
                cout << "Pilihan yang anda masukkan salah." << endl;
        }
    } while (pilihan != 5);

    return 0;
}