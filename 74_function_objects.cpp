#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects(Functor): Function wrapped in a class so that it available like an object
    int arr[] = {1, 3, 2, 12, 10, 8};
    sort(arr, arr+6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}