#include<iostream>
using namespace std;

class Employee {
    int id;
    int salary;
    public:
        void setId(void) {
            salary = 122;
            cout << "Enter the Id of employee: ";
            cin >> id;
        }
        void getId(void) {
            cout << "The Id of the Employee is " << id << endl;
        }
};

int main(){
    Employee pmr[4];
    for (int i = 0; i < 4; i++)
    {
        pmr[i].setId();
        pmr[i].getId();
    }
    
    return 0;
}