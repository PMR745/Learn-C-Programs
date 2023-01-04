#include<iostream>
#include<string>
using namespace std;

class binary {
    private:
    string s;
    public:
    void read(void);
    void check_binary(void);
    void ones_complement(void);
    void display(void);
};

void binary :: read(void) {
    cout << "Enter the Binary Number: ";
    cin >> s;
}

void binary :: check_binary(void) {
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect Binary Number\n";
        }
    }
    
}

void binary :: ones_complement(void) {
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0') {
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
    
}

void binary :: display(void) {
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    
}
int main(){
    binary b;
    b.read();
    b.check_binary();
    b.ones_complement();
    b.display();
    return 0;
}