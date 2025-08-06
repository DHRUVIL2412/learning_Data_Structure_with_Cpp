#include <iostream>
using namespace std;


int Linear_search( int Arr[] ,  int len , int key){
    for (int i=0; i < len ; i++){
        if (Arr[i] == key ){
            return i;
        }
    }
    return -1;
}

int main(){
    int Arr[] = { 10,23,01,303,40,203,023,3023};
    cout << Linear_search(Arr ,8, 023);
}

