// 5. Write a program in C++ to check whether a number is prime or not with if-else
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if(num == 2) {
        cout << "It is a Prime Number.";
    }
    else if(num%2 == 0) {
        cout << "It is not a Prime Number.";
    }
    else {
        cout << "It is a Prime Number.";
    }
}