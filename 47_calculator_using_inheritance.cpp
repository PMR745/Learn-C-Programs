#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator {
    int a, b;
    public:
        void getDataSimple() {
            cout << "Enter the value of a: ";
            cin >> a;
            cout << "Enter the value of b: ";
            cin >> b;
        }
        void performOperations() {
            cout << "The value of a + b is " << a + b << endl;
            cout << "The value of a - b is " << a - b << endl;
            cout << "The value of a * b is " << a * b << endl;
            cout << "The value of a / b is " << a / b << endl;
        }
};

class ScientificCalculator {
    int a, b;
    public:
        void getDataScientific() {
            cout << "Enter the value of a: " << endl;
            cin >> a;
            cout << "Enter the value of b: " << endl;
            cin >> b;
        }
        void performOperationsScientific() {
            cout << "The value of cos(a) is " << cos(a) << endl;
            cout << "The value of sin(a) is " << sin(a) << endl;
            cout << "The value of exp(a) is " << exp(a) << endl;
            cout << "The value of tan(a) is " << tan(a) << endl;
        }
};

class HybridCalculator: public SimpleCalculator, public ScientificCalculator {

};

int main(){
    // SimpleCalculator calc;
    // calc.getData();
    // calc.performOperations();

    // ScientificCalculator calc2;
    // calc2.getData();
    // calc2.performOperationsScientific();

    HybridCalculator calci;
    calci.getDataScientific();
    calci.performOperationsScientific();
    calci.getDataSimple();
    calci.performOperations();
    return 0;
}