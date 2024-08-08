#include <iostream>
#include <ctime>
using namespace std;

void fillArr(int* const arr, const int size){
    srand(time(NULL));
    for (int i = 0; i < size; i++){
        arr[i] = rand()%100;
    }
}

void showArr(int* const arr, const int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}

void sort(int* const arr, const int size){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void shownew(int* const ar, const int size){
    for(int i = 0; i < size; i++){
        cout << ar[i] << ' ';
    }
    cout << endl;
}