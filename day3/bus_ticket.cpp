#include <iostream>
using namespace std;
int main(){
    int bus_ticket =100;

    cin >> bus_ticket;

    if (bus_ticket< 100){
        cout << "bying price less then 100";
    }
    else if (bus_ticket >100 && bus_ticket <200){
        cout << "bying price under 200 to the range of the 200";
    }
    else {
        cout << " buying price is the more than the 199 ";
    }
    return 0;
}
