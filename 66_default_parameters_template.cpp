#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float>
class PMR {
    public:
        T1 a;
        T2 b;
        PMR(T1 x, T2 y) {
            a = x;
            b = y;
        }
        void display() {
            cout << "The value of a is " << a << endl;
            cout << "The value of b is " << b << endl;
        }
};

int main(){
    PMR <> p1(3, 5.3);
    p1.display();
    cout << endl;
    PMR<float, char> p(3.4, 'c');
    p.display();
    return 0;
}