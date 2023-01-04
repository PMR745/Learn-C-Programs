#include <iostream>
using namespace std;
int main()
{
    int Choice;
    int a, b;
    float c;
    cout << "Choice" << endl;
    cout << "1. Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
    cout << "Enter your choice: ";
    cin >> Choice;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    switch (Choice)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = float(a)/float(b);
        break;
    default:
        cout << "Invalid choice";
        break;
    }
    cout << "Answer is " << c;
    return 0;
}