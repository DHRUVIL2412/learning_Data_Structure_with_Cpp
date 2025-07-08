#include <iostream>
using namespace std;

int main(){
    int age ;
    cout << "please enter the age " << endl; 
    cin >> age ;    // during this excution code will stop 
                    //here to take the input from the user and not responding 
                    // Note :: >> is the overloading operator
    cout << "the age of use " << age ;
    return 0 ; 
}