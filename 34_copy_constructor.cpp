#include<iostream>
using namespace std;

class Number {
    int a;
    public:
    Number() {
        a = 0;
    }
    Number(int num) {
        a = num;
    }
    // When no copy contructor is found, compiler supplies its own copy contructor.
    Number (Number &obj) {
        a = obj.a;
    }
    void display() {
        cout << "The Number for this object is " << a << endl;
    }
};

int main(){
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number w(x);
    w.display(); 
    Number z2 = z;
    return 0;
}