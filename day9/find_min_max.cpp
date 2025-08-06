#include <iostream>
using namespace std;

int main(){
    int numbs[14] = {10,20,304,29,393,4929,2342,52,53,1245,12,45,2,5};
    int len = 15;

    // to find the minmum in the array size of the 
    int smallest  = INT_MAX;
    for (int i = 0 ; i < len ; i++)
    {
        if (smallest > numbs[i]){
            smallest = numbs[i];
        }
    }

    cout << smallest ;
    int biggest_ele = INT_MIN;
    int index = 0 ;
    //  write program to find the 
    for (int j=0 ;  j<len ; j++){
        if (biggest_ele < numbs[j]){
            biggest_ele = numbs[j];
            index = j;
        }
    }
    cout << index;
    return smallest;
}