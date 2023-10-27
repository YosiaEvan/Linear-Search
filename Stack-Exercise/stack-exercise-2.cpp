/*
    Nama    : Yosia Evan
    NIM     : 2281020
*/

#include <iostream>
using namespace std;

#define max 6

int stack[max];
int top = -1;
int max_value = 0;

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
        cout << "Stack elements: ";
        for(int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
            if(stack[i] > max_value) {
                max_value = stack[i];
            }
        }
        cout << endl;
    }
}

int main() {
    cout << "Input some elements onto the stack:" << endl;
    push(7);
    push(4);
    push(2);
    push(5);
    push(1);
    push(0);
    display();
    cout << "Maximum value: " << max_value << endl;
    cout << "Remove two elements:" << endl;
    pop();
    pop();
    display();
    cout << "Input two more elements" << endl;
    push(-1);
    push(10);
    display();
    cout << "Maximum value: " << max_value << endl;


    return 0;
}