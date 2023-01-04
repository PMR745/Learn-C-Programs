#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the Rows: ";
    cin >> rows;
    cout << "Enter the Columns: ";
    cin >> columns;
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<columns; j++) {
            cout << "*";
        }
        cout << endl;
    }
}