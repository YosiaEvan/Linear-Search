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
        cout << "Stack elements: ";
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
        cout << "Stack elements: ";
        for(int i = 0; i <= top; i++) {
            temp[i] = stack[top-i];
        }
        for(int i = top; i >= 0; i--) {
            stack[i] = temp[i];
            cout << stack[i] << " ";
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
    cout << "Display the reverse elements of the stack:" << endl;
    displayReverse();
    cout << "Remove two elements:" << endl;
    pop();
    pop();
    display();
    cout << "Input two more elements" << endl;
    push(-1);
    push(10);
    display();
    cout << "Display the reverse elements of the stack:" << endl;
    displayReverse();


    return 0;
}