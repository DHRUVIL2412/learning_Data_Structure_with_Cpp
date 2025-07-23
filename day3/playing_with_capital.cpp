#include <iostream> 
using namespace std;

int main(){
    char ch ;
    cout << "enter the number ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "lower case latter ";
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "upper case later ";
    }
    else if (ch >= 65 && ch <=90 ){
        cout << "  also consider as the asci value";
    }
    else if ( ch >=91 && ch <= 116)
    {
        cout << "also imaply on the upper case latter. ";
    }
    else  {
        cout  << "may be the diffrent symbol digit or special char";
    }
    return 0;
}