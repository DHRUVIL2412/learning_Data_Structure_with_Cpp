#include <iostream>
using namespace std;

int main(){
    // the problem with the exponential is the we can do the limited number 
    // of the calculation on the machine so we need to keep our calcuation lowes poisble complexity so prevent from the long term excution 

    //  example :  if 5^7 we have the two case 1) 5*5*5*5*5*5*5 2) 5^1 + 5^2 + 5^4 
    //  we are perform this using the binary operation 
    long binForm = 3 ;
    double ans = 1 ;
    double x = 2.10;


    if (x==0) return 0;
    if (binForm==0) return 1;
    if (x == 1) return 1;
    if( x == -1 && binForm%2 == 0) return 1.0;
    if( x == -1 && binForm%2 != 0) return 1.0;
    if(binForm<0){
        x = 1/x;
        binForm = -binForm;
    }

    while (binForm > 0){
        if (binForm %2 ==1 ){
            ans *= x;
        }
        x *=x;
        binForm /= 2;
    }
    cout << ans ; 
    return ans;
}