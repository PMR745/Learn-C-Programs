#include<iostream>
using namespace std;

// this is a keyword which is a pointer which points to the object which invokes the member function
class A {
    int a, b;
    public:
        void setData(int a, int b) {
            this->a = a;
            this->b = b;
        }

        void getData() {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
        }
};

int main(){
    A a;
    a.setData(5, 7);
    a.getData();
    return 0;
}