#include<iostream>
using namespace std;

class Simple {
    int data1, data2, data3;
    public:
        Simple(int a, int b = 1, int c = 0) {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void display() {
            cout << "The Value of data1, data2 and data3 is " << data1 << ", " << data2 << " and " << data3 << endl;
        }
};

int main(){
    Simple s(1, 2, 3);
    s.display();
    Simple s2(1, 2);
    s2.display();
    Simple s3(1);
    s3.display();
    return 0;
}