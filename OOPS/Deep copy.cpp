/*A deep copy creates a new object and copies all the data from the original object, including the data pointed to by pointers.
This means that the new object will have its own independent copy of the data.*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Deep copy example
class MyClass {
public:
    int *data;
    MyClass(int val) {
        data = new int;
        *data = val;
    }
    // Deep copy constructor
    MyClass(const MyClass& other) {
        data = new int;
        *data = *other.data;
    }
    ~MyClass() {
        delete data;
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // Deep copy
    cout << *obj1.data << endl; // Output: 10
    cout << *obj2.data << endl; // Output: 10
    *obj2.data = 20;
    cout << *obj1.data << endl; // Output: 10
    cout << *obj2.data << endl; // Output: 20
    return 0;
}