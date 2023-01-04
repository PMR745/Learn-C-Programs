#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex o1, Complex o2);
    int sumImgComplex(Complex o1, Complex o2);
};

class Complex
{
    int a, b;

    // Individually assigning Friend Function
    // friend int Calculator::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator::sumImgComplex(Complex o1, Complex o2);

    // Assigning whole class as friend
    friend class Calculator;

public:
    void setNumbers(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumbers()
    {
        cout << "Your Number is " << a << " + " << b << "i\n";
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumImgComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1, o2;
    o1.setNumbers(1, 4);
    o2.setNumbers(4, 6);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int res2 = calc.sumImgComplex(o1, o2);
    cout << "The sum of Img part of o1 and o2 is " << res2 << endl;
    return 0;
}