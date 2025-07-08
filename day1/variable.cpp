#include <iostream>
using namespace std;

int main() {
    // Declare and initialize variables
    int age = 25; // Integer variable
    double height = 5.9; // Double variable
    char initial = 'D'; // Character variable
    string name = "Dhruvil Tank"; 
    float PI = 3.148584785;
    bool marriage = false;

    // all the oprtation are perform is the primitive 
    // Output the variables
    cout << " the Pi Value " << PI << "the value of the pi " << sizeof(PI) << endl;
    cout << " married " << marriage << " size of the bool " << sizeof(marriage) << endl; 
    cout << "Name: " << name  << " size of the string " << sizeof(name) << endl;
    cout << "Initial: " << initial <<" size of the char "  <<sizeof(initial) << endl;
    cout << "Age: " << age << " size of the integer " << sizeof(age) << endl;
    cout << "Height: " << height << " feet" <<" size of the height " << sizeof(height) << endl;
    return 0;

}

