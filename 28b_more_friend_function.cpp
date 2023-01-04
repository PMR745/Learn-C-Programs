#include<iostream>
using namespace std;

// Forward Declaration
class c2;

class c1 {
    int val1;
    public:
        void indata(int a) {
            val1 = a;
        }
        void display(void) {
            cout << val1 << endl;
        }
    friend void exchange(c1 &, c2 &);
};

class c2 {
    int val2;
    public:
        void indata(int a) {
            val2 = a;
        }

        void display(void) {
            cout << val2 << endl;
        }
        friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y) {
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 o1;
    c2 o2;

    o1.indata(34);
    o1.display();

    o2.indata(67);
    o2.display();
    exchange(o1, o2);

    cout << "The value after exchanging becomes: ";
    o1.display();
    cout << "The value after exchanging becomes: ";
    o2.display();
    return 0;
}