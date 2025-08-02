#include <iostream>
using namespace std;

int main(){
    int counter = 1;
    int range = 5;
    for (int i = 0 ; i <range ; i++){
        for (int j=0 ;  j<i+1 ; j++){
            cout << counter ; 
        }
        counter = counter +1 ;
        cout << endl ;
    }
}