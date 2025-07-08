#include <iostream>
using namespace std ;

int main(){
    // Arithmetic operator
    int a = 2 ,b = 10 , c=1;
    float d =1 ,e = 4 ,f = 5;
    cout << d+e+f; 
    cout << a-b;
    cout << a*b;
    cout << a/b << endl;

    // Relational  operator 
    char m = c!=d ; 
    cout << "relational operator value " << m << endl ; 
    // c == d  , c >= d , d <=2

    // Logical Operator 

    bool check = d==1 || a==3;
    cout << check << endl; 

    bool and_try = (e ==4 && f==5) ; 
    cout << and_try << endl;

    
    // unary operator  pre increment and post increment
    int j = f++;
    cout << j<< endl;
    cout << f << endl; 
    cout << f << endl; 
    
    int g = ++c;
    cout << g << endl;
    cout << c << endl; 
    cout << c << endl;  

    
}