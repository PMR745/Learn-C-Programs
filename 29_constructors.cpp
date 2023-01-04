#include<iostream>
using namespace std;

class Complex {
    int a, b;
    public:
    // creating a constructor
    // Constructor is a special member function with same name as of the class. It is automatically invoked whenever an object is created
    // It is used to initialize the object of its class.
    Complex(void);
    void printNumber() {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void) {  // This is a default constructor as it has no parameters
    a = 0;
    b = 0;
}

int main(){
    Complex c;
    c.printNumber();
    return 0;
}

/* Properties of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types 
4. It can have default arguments
5. We cannot refer to their address

*/