#include<iostream>
using namespace std;

/*
Syntax for inheriting in multiple iheritance
class Derived : visibility-mode base1, visibility-mode base2
{
    class body
}
*/

class Base1 {
    protected:
        int base1int;
    public:
        void set_base1int(int a) {
            base1int = a;
        }
};

class Base2 {
    protected:
        int base2int;
    public:
        void set_base2int(int a) {
            base2int = a;
        }
};

/*
The inherited derived class will look something like this:
Data Member:
    base1int --> protected
    base2int --> protected
    
Member Function:
    set_base1int() --> public
    set_base2int() --> public
    show() --> public
*/

class Derived : public Base1, public Base2 {
    public:
        void show() {
            cout << "The value of Base1 is " << base1int << endl;
            cout << "The value of Base2 is " << base2int << endl;
            cout << "The sum of these values is " << base1int + base2int << endl;
        }
};

int main(){
    Derived pmr;
    pmr.set_base1int(12);
    pmr.set_base2int(2);
    pmr.show();
    return 0;
}