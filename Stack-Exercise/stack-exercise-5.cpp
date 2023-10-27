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
        cout << "Stack elements are: ";
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
    cout << "Input some elements onto the stack:" << endl;
    push(7);
    push(4);
    push(2);
    push(5);
    display();
    findAndRemove();
    display();
    cout << "Input two more elemets" << endl;
    push(-1);
    push(20);
    display();
    findAndRemove();
    display();

    return 0;
}