#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor(argument-list) : initilization-section
{
    assignment + other code;
}

class Test {
    int a;
    int b;
    public:
        Test(int i, int j) : a(i), b(j) {
            constructor-body;
        }
};
*/

class Test {
    int a;
    int b;
    public:
        // Test(int i, int j) : b(j), a(i+b) // This will create garbage value as a is declared first in the class and used last in the initialization
        Test(int i, int j) : a(i), b(a+j)
        {
            cout << "Constructor executed";
            cout << "\nValue of a is " << a << "\nValue of b is " << b;
        }
};

int main(){
    Test t(4,6);
    return 0;
}