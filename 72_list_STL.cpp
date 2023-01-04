#include<iostream>
#include<list>
using namespace std;

void display(list<int> &li) {
    list<int> :: iterator it;
    for(it = li.begin(); it != li.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    list<int> list1; // List of 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    list1.sort();
    display(list1);

    list1.pop_back();
    display(list1);
    list1.pop_front();
    display(list1);

    list<int> list2(3); // Empty list of size 3
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 5;
    iter++;
    *iter = 9;
    iter++;

    display(list2);
    list2.remove(5);
    display(list2);

    cout << "After merging: ";
    list1.merge(list2);
    display(list1);
    return 0;
}