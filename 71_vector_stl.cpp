#include<iostream>
#include<vector>
#include <bits/stdc++.h>

using namespace std;

template <class T> 
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main(){
    vector<int> vec1;   
    vector<char> vec2(4); // 4-element character vector
    vector<char> vec3(vec2); // 4-element character vector from vec2
    vector<int> vec4(6, 3); // 6 element with vector 3
    int element, size; 
    cout << "Enter the size of your vector: ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element: ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back(); // Will pop the last element from the vector
    display(vec1);
    // *max_element(vec.begin(), vec.end()) --> gives maximum element in the given vector vec
    // To use this you need to include #include <bits/stdc++.h> header file
    cout << "The maximum element in vector is " << *max_element(vec1.begin(), vec1.end()) << endl;

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter + 3, 533);
    display(vec1);

    display(vec4);
    return 0;
}