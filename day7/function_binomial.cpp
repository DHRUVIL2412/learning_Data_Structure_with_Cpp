#include <iostream>
using namespace std;
int factorial(int j){
        int fc = 1;
        for(int k=j ; k>0 ;k--){
            fc *= k;
        }
        return fc;
    }
int unoptimize_tech( int n  , int r){
    return (factorial(n) / (factorial(r)* factorial((n-r))));
}

int main(){
cout << unoptimize_tech(8,2);
// cout << optimize_tech(8,2);
}

