#include<iostream>
using namespace std;

class Complex {
    int real, img;
    public:
        void getData() {
            cout << "The real part is " << real << endl;
            cout << "The Imaginary part is " << img << endl;
        }
        void setData(int a, int b) {
            real = a;
            img = b;
        }
};

int main(){
    Complex c;

    // Complex *ptr = &c;
    // c.setData(3, 5);
    // c.getData();

    // (*ptr).setData(3, 5); // Deferencing Pointer
    // (*ptr).getData();

    Complex *ptr = new Complex;
    ptr->setData(3, 5);
    ptr->getData();
    return 0;
}