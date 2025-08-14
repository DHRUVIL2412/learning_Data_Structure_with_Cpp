#include <iostream>
using namespace std;

int main(){
    int prices[] = { 102,202,303,03,303,40404,2,43,4,25};
    int max_profit = 0;
    int best_buy = prices[0];
    for (int i=0 ;  i< 9 ; i++){
        if (best_buy < prices[i]){
            max_profit = max(max_profit ,prices[i]-best_buy);

        } 
        best_buy = min(best_buy , prices[i]);

    }
    cout << "best buy is the " << best_buy << endl;
    cout << "best sell is the " << max_profit << endl;
}