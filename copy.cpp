#include <iostream>
using namespace std;

void copy(int* ar, int* arr, const int size){
    for (int i = 0; i < size; i++){
        ar[i] = arr[i];
    }
}