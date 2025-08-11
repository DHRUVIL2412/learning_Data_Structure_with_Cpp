#include <vector>
#include <iostream>
using namespace std;

vector<int> pair_sum( vector<int> vc , int target){
    vector<int> ans ; 
    // int st = 0;
    int end = vc.size();
    int sum = 0;
    int st =0;
    while (sum < end){

        sum = vc[st] + vc[end];
        if (sum < target){
            st++;
        }
        else if ( sum < target){
            end--;
        }
        else {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
    }

    
    
    return ans;
}

int main(){
 vector<int> vc = {23,24,2,5,32,4,3};
 int target = 34;
 for (int i :pair_sum(vc , target)){
    cout << i;
 }
 return 0;

 
}
