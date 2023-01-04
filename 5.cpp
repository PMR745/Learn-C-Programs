// 5. Write a program in C++ to check whether a number is prime or not with loop
#include <iostream>
using namespace std;

int main() {
    int num;
    int a = 0;
    cout << "Enter the Number: ";
    cin >> num;

    for(int i = 2; i<num; i++){
        if(num%i == 0) {
            a++;
        }
    }

    if(a > 0){
        cout << num << " is not a Prime Number.";
    }
    else {
        cout << num << " is a Prime Number.";
    }
}