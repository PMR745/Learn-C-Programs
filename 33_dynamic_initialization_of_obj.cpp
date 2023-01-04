#include<iostream>
using namespace std;

class BankDeposit {
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit() {}
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+r);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit :: show() {
    cout << "Principal amount was " << principal << ". Return value after " << years << " is " << returnValue << endl;
}

int main(){
    BankDeposit b1, b2, b3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p: ";
    cin >> p;
    cout << "Enter the value of r: ";
    cin >> r;
    cout << "Enter the value of y: ";
    cin >> y;
    b1 = BankDeposit(p, y, r);
    b1.show();

    cout << "Enter the value of p: ";
    cin >> p;
    cout << "Enter the value of R: ";
    cin >> R;
    cout << "Enter the value of y: ";
    cin >> y;
    b2 = BankDeposit(p, y, R);
    b2.show();
    return 0;
}