#include <iostream>
using namespace std;

int digitSum(int n){

    int sum = 0;

    while(n>0){
        sum=sum + (n % 10);
        // sum += rs;
        n = n/10;
    }

    return sum;
}

int main(){
    cout << digitSum(99);
    
}