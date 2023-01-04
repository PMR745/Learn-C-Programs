#include<iostream>
using namespace std;

// Base Class
class Employee {
    public:
    int id;
    Employee() {}
    float salary;
        Employee(int inpId) {
            id = inpId;
            salary = 34;
        }
};

class Programmer : public Employee {
    public:
    Programmer(int inpId) {
        id = inpId;
    }
    int languageCode = 9;
    void getData() {
        cout << id << endl;
    }
};
/* Derived Class syntax
class derived-class-name : visibility-mode base-class name {
    Class Members
} */

/*Notes:
1. Default visibility mode is private
2. Private visibility mode: Public members of the base class becomes the private member of the derived class
3. Public visibility mode: Public members of the base class becomes bulic memeber of the derived class.
4. Private members are never inherited.
*/
int main(){
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(3);
    cout << skillf.languageCode << endl;
    cout << skillf.id;
    return 0;
}