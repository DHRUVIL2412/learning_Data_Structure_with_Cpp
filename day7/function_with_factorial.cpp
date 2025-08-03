#include <iostream>
using namespace std;

int factorial(int n){
    int fc_out = 1;
    for(int i=n; i > 0; i--){
        fc_out = fc_out * i;
    }
    return fc_out;
}

int main(){
    cout << factorial(5);
    // return 0;
}