#include <iostream>
using namespace std;

int main(){
    // to store value of pointer 
    int a = 10;
    int* address = &a;
    int** address_store = &address;
    cout << "this is value of a=" << a<<" and address is the "<< address <<endl;
    cout << "this is the address of the other address store " << address_store << endl; 

    int d[] = { 10,30,0,23,39,89};
    cout << *d ;
    
    return 0;
}