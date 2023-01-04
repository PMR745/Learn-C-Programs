#include<iostream>
using namespace std;

class Base1 {
    int data1;
    public:
        Base1(int a) {
            data1 = a;
            cout << "Base1 Class Constructor called!" << endl;
        }
        void Base1print() {
            cout << "The value of data1 is " << data1 << endl;
        }
};

class Base2 {
    int data2;
    public:
    Base2(int b) {
        data2 = b;
        cout << "Base2 Class Constructor called!" << endl;
    }
    void Base2print() {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class derived: public Base2, public Base1 {
    int data3;
    public:
    derived(int a, int b, int c): Base2(a), Base1(b) {
        data3 = c;
        cout << "Derived Class Constructor called!" << endl;
    }
    void derivedprint() {
        cout << "The Value of data3 is " <<data3 << endl;
    }
};

class derived2: public Base1, public Base2 {
    int data4;
    public:
    derived2(int a, int b, int c): Base1(a), Base2(b) {
        data4 = c;
        cout << "Derived2 Class Constructor called!" << endl;
    }
    void derived2print() {
        cout << "The value of data4 is " << data4 << endl;
    }
};

class derived3: public Base2, virtual public Base1  {
    int data5;
    public:
        derived3(int a, int b, int c) : Base1(a), Base2(b) {
            data5 = c;
            cout << "Derived3 class Constructor called!" << endl;
        }
        void derived3print(){
            cout << "The value of data5 is " << data5 <<endl;
        }
};

int main(){
    cout << "class derived: public Base2, public Base1..." << endl;
    derived objDerived(1, 2, 3);
    cout << "\nclass derived2: public Base1, public Base2..." << endl;
    derived2 objDerived2(1, 2, 3);
    cout << "\nclass derived3: public Base2, virtual public Base1..." << endl;
    derived3 objDerived3(1, 2, 3);
    return 0;
}