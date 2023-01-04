#include<iostream>
using namespace std;

class Complex {
    int a, b;
    public:
        void setNumbers(int n1, int n2) {
            a = n1;
            b = n2;
        }
        void printNumbers() {                                                                                                   
            cout << "Your Number is " << a << " + " << b << "i\n";
        }

        friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2) {
    Complex o3;
    o3.setNumbers((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;
    c1.setNumbers(1, 4);
    c1.printNumbers();

    c2.setNumbers(5, 8);
    c2.printNumbers();

    sum = sumComplex(c1, c2);
    sum.printNumbers();
    return 0;
}

/*
    *Properties of friend functions
    1. Not in the scope of class.
    2. Since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() is invalid.
    3. Can be invoked without the help of any object.
    4. Usually contains the objects as arguments
    5. Can be declared inside public or private section of the class
    6. It cannot access the members directly by their names and need object_name.member_name to access any memeber.
    
*/