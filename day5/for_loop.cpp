#include <iostream>
using namespace std;

// int main(){
//     for(int i= 0 ; i<19; i++){
//         cout << "hello ";
//     }
//     return 0;
// }

int main(){
    int sum = 0;
    for(int i=0 ; i<19 ;i++ ){
        sum = i+ sum ;
    }
    cout << sum ;
}

