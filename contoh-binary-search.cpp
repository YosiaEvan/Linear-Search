/*
    Program ini menunjukkan contoh implementasi sederhana dari Binary Search
*/

#include <iostream>
using namespace std;

int search(int array[], int key, int low, int high) {
    while(low <= high) {
        int mid = (low + high)/2;

        if(array[mid] == key) {
            return mid; //mengembalikan index mid jika nilai yang berada di mid sama dengan nilai yang dicari
        } else if(key < array[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int array[] = {3, 4, 5, 6, 7, 8, 9};

    return 0;
}