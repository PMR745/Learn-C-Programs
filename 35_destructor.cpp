#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;

class num {
    public:
    num() {
        count ++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }
    ~num() {
        cout << "This is the time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main(){
    cout << "We are inside main function\n";
    cout << "Creating first object n1\n";
    num n1;
    {
        cout << "Enter this block\n";
        cout << "Creating two more objects\n";
        num n2, n3;
        cout << "Exiting this block\n";
    }
    cout << "Back to main\n";
    return 0;
}