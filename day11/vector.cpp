#include <iostream>
#include <vector>
// here is the vector class used to 
using namespace std;

int main(){

    vector<int> v = {101,303,03};

    for (int i : v){
        cout << i << endl ;

    }

    vector<char> ch = {'a','b','c','d','e','f'};

    for (char c :  ch){
        cout << c << endl; 
    }

    // here are some of the vector function which are use at the solving the cooding questions
    // .size()
    cout << "the size of the vector is the " <<  v.size() << endl;
    cout << "if we move to find out the size of the char file " << ch.size() << endl;

    // .push_back()
    v.push_back(10);
    for (int i :  v){
        cout << i << endl;
    }
    cout << "let's we have already have a array we wanna to append some integer back of the array so we are use the push_back "  << endl;

    // we have the diffrent methos to deal woth the deletion operation the stack called the .pop_back()
    v.pop_back();
    for (int i :  v){
        cout << i << endl;
    }
}