#include <iostream>
using namespace std;

int main(){
    int arra[] = {1,2,5,5,6};
    for (int i=0 ; i < 5 ; i++){
        // int pro = 1;
        for (int j = 0 ; j< 5 ;j++){
            if ( i!=j){

                arra[i] *= arra[j];
            }
        }
    }

    for (int i = 0 ; i < 5 ; i++){
        cout << arra[i] << endl;
    }
    return 0;
}