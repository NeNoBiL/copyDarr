#pragma once
#include <iostream>
#include <cstring>

class Keys{
    private:
        bool meas;
        int size;
        int val;
        int val_front;
    public:
        int getSize(){
            return size;
        }

        int getVal(){
            return val;
        }

        int getVal_front(){
            return val_front;
        }

        bool getMeas(){
            return meas;
        }

        Keys(int argc, const char* argv[]){
            size = -9876;
            meas = false;
            val = -9876;
            val_front = -9876;
            for (int i = 1; i < argc; i++){
                if (!strcmp(argv[i], "--meas")){
                    meas = true;
                }

                else if (!strcmp(argv[i], "--size")){
                    size = atoi(argv[++i]);
                }

                else if (!strcmp(argv[i], "--push_back")){
                    val = atoi(argv[++i]);
                }

                else if (!strcmp(argv[i], "--push_front")){
                    val_front = atoi(argv[++i]);
                }
            }
        }
};