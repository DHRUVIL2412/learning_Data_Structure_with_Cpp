#include <iostream>
using namespace std;

int main(){
    //  two pointer approch for the water container problem
    int jug[] = { 102,304,450,303,303,309,124,994,245};
    // int len = 9;
    int right =8 , left = 0;
    int max_water = 0;
    while (left <right ){
        int width = right - left;
        int height = min(jug[right], jug[left]);

        max_water = max(width * height , max_water);
        if ( jug[left] < jug[right] ){
            right--;
        }
        else {
            left++;
        }
    }
    cout << max_water;
    return max_water;
}