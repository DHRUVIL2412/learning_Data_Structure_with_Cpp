#include <iostream>
using namespace std;

int ReverseArray(int Arr[] , int len){
    int start = 0;
    int end = len -1 ;
    
    while(start < end ){
        swap(Arr[start] , Arr[end] );
        start++;
        end--;

    }
    return 1;
}
int main(){
    int arr[] = {10 ,304, 4505 ,489, 3783,39,37833};

    ReverseArray(arr ,7 );
    for(int i =0 ; i<7 ; i++){
        cout << arr[i] << endl;
    }
}


