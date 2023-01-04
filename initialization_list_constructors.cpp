#include<iostream>
using namespace std;

/*
syntax for initialializing list of constructor:
constructor(argument-list) : initialization-section 
{
    assignment;
}

E.G:-
class Test {
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j) {
            constructor-body;
        }
};

*/

class Test {
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j) {
            cout << "Constructor Executed" << endl;
            cout << "The value of a is " << a << " and " << b;
        }
};

int main(){
    Test a(3, 2);
    return 0;
}