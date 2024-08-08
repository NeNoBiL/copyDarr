#include <iostream>
using namespace std;

void push_back(int*& arr, int& size, const int val){
    int* ar = new int [size+1];
    for (int i = 0; i < size; i++){
        ar[i] = arr[i];
    }
    ar[size] = val;
    delete[] arr;
    arr = ar;
    size += 1;
    ar = nullptr;
}

void push_front(int*& arr, int& size, const int val_front){
    int* ar = new int[size+1];
    ar[0] = val_front;
    for(int i = 1; i <= size; i++){
        ar[i] = arr[i-1];
    }
    delete [] arr;
    arr = ar;
    size +=1;
    ar = nullptr;
}
