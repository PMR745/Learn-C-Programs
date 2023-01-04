#include<iostream>
using namespace std;

class Complex {
    int a, b;
    public:
        Complex(void);
        Complex(int , int);

        void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(void) {
    a = 0;
    b = 0;
}

Complex :: Complex(int x, int y) {
    a = x;
    b = y;
}

int main(){
    Complex a; // Default Constructor

    // Parameterized Constructor
    Complex b(4, 6); // Implicit Call
    Complex c = Complex(5, 7); // Explicit Call

    a.printNumber();
    b.printNumber();
    c.printNumber();

    return 0;
}