#include <iostream>
using namespace std;


int decToBinary(int decNum){
    // int reminder = 0;
    int ans =0  ;
    int power = 1;
while (decNum > 0){
    int reminder = decNum % 2;
    decNum /= 2;
    
    ans += reminder * power ;
    power *= 10 ;
}
return ans;
}

int Binary_to_decimal(int num){
    int decimal =0 ;
    int pow = 1;

while (num >0){
    // if ()
    int rem = num % 10;
    decimal += rem * pow ;
    num = num /10;
    pow *= 2;
}
return decimal;
}

int reveseNum(int n){
    int cnt = 1;
    int result = 0 ; 
    while (n>0){
        int rem = n%10 ;
        result += rem * cnt ;
        cnt *=10;
        n = n/ 10;
    }
    return result;
}
int main(){
    int decNum = 5;
    cout << decToBinary(decNum) << endl ;
    cout << Binary_to_decimal(10110) << endl ;
    cout << reveseNum(12233) << endl ;
    // cout << reversNum(100);
    return 0;
}