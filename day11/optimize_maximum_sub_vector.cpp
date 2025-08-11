#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n = 6 ;
    int arr[] = { 1,2-5,4,-1,5,6,-8 };
    int sum = 0;
    int max_sum = INT_MIN;

    for (int i = 0 ; i< n ; i++){
        sum += arr[i];
        max_sum = max(sum , max_sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << max_sum;
    return max_sum;
}
