#include<iostream>
using namespace std;

// Forward Declaration
class Y;

class X {
    int data;
    public:
        void setValue() {
            int value;
            cout<<"enter a1";
            cin>>value;
            data = value;
        }
    friend void add(X, Y);
};

class Y {
    int num;
    public: 
        void setValue(int value) {
            num = value;
        }
    friend void add(X, Y);
};

void add(X o1, Y o2) {
    cout << "Sum of data of X and Y objects is " << o1.data + o2.num;
}

int main(){
    X a1;
    a1.setValue();


    Y b1;
    b1.setValue(5);
    add(a1, b1);
    return 0;
}