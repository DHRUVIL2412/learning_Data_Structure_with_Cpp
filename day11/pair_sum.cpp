#include <vector>
#include <iostream>
using namespace std;

vector<int> pair_sum( vector<int> vc , int target){
    vector<int> ans ; 
    for (int i = 0 ; i < vc.size() ; i++){
        for (int j = 0 ; j < vc.size() ; j++){
            if ( vc[i] + vc[j] == target){
                ans.push_back(i);
                ans.push_back(j);
                
            }
        }
    }
    
    return ans;
}

int main(){
 vector<int> vc = {23,24,2,5,32,4,3};
 int target = 26;
 for (int i :pair_sum(vc , target)){
    cout << i;
 }
 return 0;

 
}
