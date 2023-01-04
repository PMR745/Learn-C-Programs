#include<iostream>
#include<math.h>
using namespace std;

/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, /
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice and display the result using another funciton.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of inheritance are you using?
    Q2. Which mode of inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusablity implemented
*/

class SimpleCalculator {
    int num1, num2;
    public:
        void add();
        void subtract();
        void multiply();
        void divide();
        void getData();
        void show();
};

void SimpleCalculator :: getData() {
    cout << "Enter the First Number: ";
    cin >> num1;
    cout << "Enter the Second Number: ";
    cin >> num2;
}

void SimpleCalculator :: add() {
    cout << "The sum is " << num1 + num2 << endl;
}

void SimpleCalculator :: subtract() {
    cout << "The difference is " << num1 - num2 << endl;
}

void SimpleCalculator :: multiply() {
    cout << "The product is " << num1 * num2 << endl;
}

void SimpleCalculator :: divide() {
    cout << "The division is " << num1/num2 << endl;
}

void SimpleCalculator :: show() {
    add();
    subtract();
    multiply();
    divide();
}


class ScientificCalculator {
    int num1, num2;
    public:
        void getData2();
        void power();
};

void ScientificCalculator ::getData2() {
    cout << "Enter the First Number: ";
    cin >> num1;
    cout << "Enter the Second Number: ";
    cin >> num2;
}

void ScientificCalculator :: power() {
    cout << num1 << endl << num2 << endl;
    cout << "The power is " << pow(num1, num2) << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {
    int num1, num2;
};

int main(){
    SimpleCalculator s;
    s.getData();
    s.show();
    ScientificCalculator s2;
    s2.getData2();
    s2.power();

    HybridCalculator h;
    h.getData();
    h.show();
    h.power();
    return 0;
}