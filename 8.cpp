// 8. Write a program in C++ to find the last prime number occur before the entered number
#include <iostream>
using namespace std;

int main() {
    int num, fact = 1;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = num; i>1; i--) {
        fact *= i;
    }

    cout << "Factorial of " << num << " is " << fact;
}