#include<iostream>
using namespace std;

template <class T>
class PMR {
    public:
        T data;
        PMR(T a) {
            data = a;
        }
        void display();
};

template <class T>
void PMR <T> :: display() {
            cout << data;
}

void func(int a) {
    cout << "I am first func() " << a << endl;
}

template <class T>
void func(T a) {
    cout << "I am templated func() " << a << endl;
}

int main(){
    // PMR <float> p(7.5);
    // PMR <char> p1('c');
    // cout << p.data << endl;
    // p.display();
    // p1.display();

    func(3); // Exact match takes the highest priority
    func(3.0);
    return 0;
}