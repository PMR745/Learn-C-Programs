#include<iostream>
using namespace std;

class Base {
    protected:
        int a = 0;
    private:
        int b;

};

/* 
For a protected member:
                            Public           Private            Protected
1. Private Members      Not inherited       Not Inherited      Not Inherited
2. Protected Members      Protected           Private           Protected
3. Public Members         Public              Private           Protected
*/
class Derived: protected Base {

};

int main(){
    
    return 0;
}