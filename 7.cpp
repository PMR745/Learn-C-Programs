// 6. Write a program in C++ to find prime number within a range
#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    int a = 0;
    cout << "Enter the number1: ";
    cin >> num1;
    cout << "Enter the number 2: ";
    cin >> num2;
    for (int i = num1; i<=num2; i++) {
        for (int j = 2; j<i; j++) {
            if(i%j == 0){
                a++;
            }
        }
        if(a==0) {
            cout << i << " ";
        }
        a = 0;
    }
}