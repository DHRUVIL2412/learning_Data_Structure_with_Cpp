#include <iostream>
using namespace std ;

int main()
{   
    // difineing the variable 
    float may_value_loss = 10.2023;
    int conversion =  may_value_loss;
    float with_class = int(may_value_loss);
    // print the value
    cout << "with loss print " << conversion << endl;
    cout << "try with class " << with_class << endl;

    // doing with (int) so it may possible in c++
    double dim_dim = 9847982.234234;
    int try_with_double =  (int)dim_dim;
    cout << "try with double " << try_with_double << endl;

}