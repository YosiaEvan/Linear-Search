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
        int max_value = 0;
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
            if(stack[i] > max_value) {
                max_value = stack[i];
            }
        }
        cout << endl;
    }
}

void findAndRemove() {
    if(isEmpty()) {
        cout << "Stack empty." << endl;
        return;
    } else {
        int max_value = 0;
        for(int i = top; i >= 0; i--) {
            if(stack[i] > max_value) {
                max_value = stack[i];
            }
        }
        for(int j = top; j >= 0; j--) {
            if(stack[j] == max_value) {
                for(int k = j; k <= top; k++) {
                    stack[k] = stack[k+1];
                }
            }
        }
        top--;
        cout << "Find and remove the largest element " << max_value << " from the stack.";
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
             << "4. Find and Remove Largest Element" << endl
             << "5. Exit" << endl;
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
            case 4:
                findAndRemove();
                break;
            default:
                cout << "The option you entered is incorrect." << endl;
        }
    } while(pilihan != 5);

    return 0;
}