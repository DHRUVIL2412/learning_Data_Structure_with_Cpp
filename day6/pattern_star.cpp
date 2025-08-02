#include  <iostream>
using namespace std;

int main(){
    int range = 5;
    for (int i=0 ;i<range ;i++ ){
      for (int j=0 ; j<i+1 ; j++)  {
            cout << "* ";
      }
      cout << endl;
    }
    return 0;
}