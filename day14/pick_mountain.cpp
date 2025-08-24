#include <iostream>
#include <vector>
using namespace std;

int Linear_way_pick_of_mountain(vector<int> slops ){

for (int i=1;i<slops.size() ; i++){
if (slops[i]< slops[i-1]){
    return i;
}
}

}
int Binary_search_way_pick_of_mountain(vector<int> slops){
    int st = 0 ;
    int end = slops.size()-1;

    while( st < end){
        int mid = st + (end-st)/2;

        if (slops[mid] > slops[mid-1] && slops[mid]< slops[mid+1]){
            return mid;
        }
        else {
            
            if (slops[mid] > slops[mid+1] ){
                st = mid +1;          
            }
            else{
                end = mid-1;
            }

        }
    }
    return -1;
}

int main(){
    
    vector<int> Mountain = { 10,20,30,50,70,30,20};
    cout << Binary_search_way_pick_of_mountain(Mountain);
    cout << Linear_way_pick_of_mountain(Mountain);

}