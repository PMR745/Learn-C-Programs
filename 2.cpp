// To find max number from 3 numbers.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout <<"Enter the 3 numbers: ";
    cin >> a >> b >> c;
    if(a>b) {
        if(a>c) {
            cout << a << " is the greater number.";
        }
        else {
            cout << c << " is the greater number.";
        }
    }
    else if(b>a) {
        if(b>c) {
            cout << b << " is the greater number.";
        }
        else {
            cout << c << " is the greater number.";
        }
    }
    else {
        cout << "All are Same.";
    }
    return 0;
}