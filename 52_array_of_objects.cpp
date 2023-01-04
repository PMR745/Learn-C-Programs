#include<iostream>
using namespace std;

class Shop {
    int id;
    float price;
    public:
        void setData(int a, float b) {
            id = a;
            price = b;
        }
        void getData() {
            cout << "Code of this item is " << id << endl;
            cout << "Price of this item is " << price << endl;
        }
};

int main(){
    int size = 3;
    int p;
    float q;
    Shop *ptr = new Shop[size];
    Shop *temp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and price of item " << i + 1 << ": ";
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    
    for (int j = 0; j < size; j++)
    {
        cout << "\nItems number: " << j + 1 << endl;
        temp->getData();
    }
    
    return 0;
}