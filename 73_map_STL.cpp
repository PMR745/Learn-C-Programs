#include<iostream>
#include<map>
using namespace std;

// Map is an associative array
int main(){
    map<string, int> marks;
    marks["PMR"] = 99;
    marks["Rohit"] = 34;
    marks["Raj"] = 32;
    map<string, int> :: iterator itr;
    for(itr=marks.begin(); itr != marks.end(); itr++) {
        cout << (*itr).first << ": " << (*itr).second << "\n";
    }

    
    cout << "Size is " << marks.size() << endl;
    return 0;
}