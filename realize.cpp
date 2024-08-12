#include <iostream>
#include "complete.h"
#include "copy.h"
#include "push.h"
#include "keys.h"
// #define DEBUG
using namespace std;

void foo(int argc, const char* argv[]){
    Keys keys(argc, argv);
    if (keys.getMeas() == true){
        if (keys.getSize() == -9876){
            cout << "use --size to enter the length of the array" << endl;
        }
        else{
            int size = keys.getSize();
            int* arr = new int [size];
            fillArr(arr, size);
            sort(arr, size);
            showArr(arr, size);
            if ((keys.getVal() == -9876) && (keys.getVal_front() == -9876)){
                cout << endl << "you can use --push_back to add a value at the end of the array AND..." << endl;
                cout << "you can use --push_front to add a value at the front of the array AND..." << endl;
            }
            else if((keys.getVal() == -9876) == 0 && (keys.getVal_front() == -9876)==1){
                int val = keys.getVal();
                push_back(arr, size, val);
                showArr(arr, size);
                cout << endl << "you can use --push_front to add a value at the front of the array" << endl;
            }
            else if((keys.getVal() == -9876) == 1 && (keys.getVal_front() == -9876)==0){
                int val_front = keys.getVal_front();
                push_front(arr, size, val_front);
                showArr(arr, size);
                cout << endl << "you can use --push_back to add a value at the end of the array" << endl;
            }
            else{
                int val = keys.getVal();
                int val_front = keys.getVal_front();
                push_back(arr, size, val);
                push_front(arr, size, val_front);
                showArr(arr, size);
            }
            delete [] arr;
            arr = nullptr;
        }
    }
    else{
        cout << "use --meas bec semerenco likes it" << endl;
    }
}