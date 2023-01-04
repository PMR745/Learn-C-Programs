// Print all prime number between two given numbers
#include <iostream>
using namespace std;

int main() {
    int a, b, i;
    cout << "Enter the Two numbers: ";
    cin >> a >> b;
    for (i = a; i < b; i++) {
        for(int j = 2; j < i; j++) {
            if(i%j == 0) {
                cout << i << endl << j << endl;
                break;
            }
        }
    }
    
}