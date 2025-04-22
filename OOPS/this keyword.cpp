//In C++, ‘this’ pointers is a pointer to the current instance of a class. 
//It is used to refer to the object within its own member functions.
#include <iostream>
using namespace std;
// Class that uses this pointer
class A {
  public:
    int a;
    A(int a) {
        // Assigning a of this object to
        // function argument a
        this->a = a;
    }
    void display() {
        // Accessing a of this object
        cout << "Value: " << this->a;
    }
};
int main() {
    // Checking if this works for the object
    A o(10);
    o.display();
    return 0;
}

