// 8. Write a program in C++ to find the last prime number occur before the entered number
#include <iostream>
using namespace std;

int main() {
    int num, a = 0, p = 0;
    cout << "Enter the Number: ";
    cin >> num;
    for (int i = 2; i<=num; i++) {
        for (int j = 2; j < i; j++) {
            if(i%j == 0) {
                a++;
            }
        }
        if (a == 0) {
            p = i;
        }
        a = 0;
    }
    cout << "The Prime Number close to " << num << " is " << p;
    
} 