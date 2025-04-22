/*A shallow copy creates a new object, and then it copies the values of the original object's members into the new object.
If the original object contains pointers, the shallow copy will copy the pointer values, not the data they point to. 
Both the original object and the copy will point to the same memory location*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Shallow copy example
class MyClass {
public:
    int *data;
    MyClass(int val) {
        data = new int;
        *data = val;
    }
    ~MyClass() {
        free(data);
    }
};
int main() {
    MyClass obj1(10);
    MyClass obj2 = obj1; // Shallow copy
    cout << *obj1.data << endl; // Output: 10
    cout << *obj2.data << endl; // Output: 10
    *obj2.data = 20;
    cout << *obj1.data << endl; // Output: 20
    cout << *obj2.data << endl; // Output: 20
    return 0;
}