#include<iostream>
using namespace std;

/*
Case 1:
class B: public A {
    // Order of execution of constructor -> first A() and then B()
};

Case 2:
class A: public B, public C {
    // Order of execution of constructor -> B() then C() and A()
};

Case 3:
class A: public B, virtual public C {
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1 {
    int data1;
    public:
        Base1(int i) {
            data1 = i;
            cout << "Base1 class constructor called" << endl;
        }
        void printDataBase1() {
            cout << "The value of Data1 is " << data1 << endl;
        }
};

class Base2 {
    int data2;
    public:
        Base2(int i) {
            data2 = i;
            cout << "Base2 class constructor called" << endl;
        }
        void printDataBase2() {
            cout << "The value of data2 is " << data2 << endl;
        }
};

class Derived : public Base2, public Base1 {
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d): Base1(a), Base2(b) {
            derived1 = c;
            derived2 = d;
            cout << "Derived class Constructor called " << endl;
        }
        void printDataDerived() {
            cout << "The value of derived1 is " << derived1 << endl;
            cout << "The value of derived2 is " << derived2 << endl;
        }
};
int main(){
    Derived pmr(1, 2, 3, 4);
    pmr.printDataBase1();
    pmr.printDataBase2();
    pmr.printDataDerived();
    return 0;
}