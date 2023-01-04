#include<iostream>
using namespace std;

class Employee {
    int id;
    static int count; //Static variables
    public:
        void setData(void) {
            cout << "\nEnter the Id: ";
            cin >> id;
            count++; 
        }
        void getData(void) {
            cout << "The Id of the Employee is " << id << " and the Employee number is " << count;
        }

        static void getCount(void) {  // Static Functions
            cout << "\nThe value of count is " << count << endl;
        }
};

int Employee:: count = 1000; // Default value is 0
int main(){
    Employee pmr, harry, me;
    // pmr.id = 1; // Cannot assign id as id is private member
    // pmr.count = 2; // Cannot assign count as count is private member

    pmr.setData();
    pmr.getData();
    Employee::getCount();

    harry.setData();
    harry.getData();
    Employee::getCount();

    me.setData();
    me.getData();
    Employee::getCount();

    return 0;
}