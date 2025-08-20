#include <iostream>
#include <vector>

using namespace std;

int Binary_search(vector<int> arr , int target){
    int end = arr.size();
    int start = 0;
    while(start <= end ){
        int mid = (start + end) / 2;
        if ( arr[mid] < target){
            start = mid ;
        }
        else if ( arr[mid] > target){
            end = mid;
        }
        else {
            return mid;
        }
        
    }
    return -1;
}

int RecursiveBinarySearch(vector<int> arr , int traget){
    
}
int main(){

    vector<int> even = { 10,30,50,60,300,400};
    cout << Binary_search(even , 60) << endl;
    vector<int> odd = { 10,40,50,60,70,80,100};
    cout << Binary_search(odd , 40) << endl;

    // checking for the even 
    for (int i : even ){
        cout << i << " here is the value and find out from even array index number" << Binary_search(even , i) << endl;
    }
    // checking of the odd
    for (int i : odd ){
        cout <<i << " here is the value and find out from odd arrat index number " << Binary_search(odd , i) << endl;
    }
return 0;
}