// Even - Odd number
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if(num%2 == 0) {
        cout << num << " is Even.";
    }
    else {
        cout << num << " is Odd.";
    }
}