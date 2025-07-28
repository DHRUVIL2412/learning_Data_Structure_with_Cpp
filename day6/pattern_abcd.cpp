#include <iostream>
using namespace std;


// write the program to print the abcd row .
// int main(){
//     // outer loop
//     char abcd = 'A';
//     for (int i=0 ; i< 10 ;i++){
//         //inner loop
        
//         for (int j = 0 ; j< 10 ; j++){
//             cout << abcd;
//         }
//         abcd = abcd + 1 ;
//         cout << endl;
//     }
// }
// output 

// AAAAAAAAAA
// BBBBBBBBBB
// CCCCCCCCCC
// DDDDDDDDDD
// EEEEEEEEEE
// FFFFFFFFFF
// GGGGGGGGGG
// HHHHHHHHHH
// IIIIIIIIII
// JJJJJJJJJJ


//  wrote the program to create the abcd in row and columns.
int main(){
    // outer loop
    char abcd = 'A';
    for (int i=0 ; i< 10 ;i++){
        //inner loop
        
        for (int j = 0 ; j< 10 ; j++){
            cout << abcd;
            abcd = abcd + 1;
        }
        abcd = abcd + 1 ;
        cout << endl;
    }
}