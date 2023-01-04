#include<iostream>
using namespace std;

class Complex {
    int a;
    int b;
    public:
        Complex() {
            a = 0;
            b = 0;
        }
        Complex(int x) {
            a = x;
            b = 0;
        }
        Complex(int x, int y) {
            a = x;
            b = y;
        }
        void printNumbers() {
            cout << "Number is " << a << " + " << b << "i\n";
        }
}; 

int main(){
    Complex c1;
    c1.printNumbers();

    Complex c2(4);
    c2.printNumbers();

    Complex c3(4, 5);
    c3.printNumbers();
    return 0;
}