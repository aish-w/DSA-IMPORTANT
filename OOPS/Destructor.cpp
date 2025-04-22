/*In C++, a destructor is a special member function within a class that is automatically called when an object of that class is destroyed.
It has the same name as the class, preceded by a tilde (~).
A destructor does not take any arguments and has no return type. */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Destructor example
class MyClass {
    public:
        int* data;
        // Constructor
        MyClass(int size) {
            data = new int[size]; // Allocate memory
        }
        // Destructor
        ~MyClass() {
            delete[] data; // Release memory
        }
    };