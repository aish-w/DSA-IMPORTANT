/*Encapsulation is defined as the wrapping up of data and information in a single unit.
In Object Oriented Programming, encapsulation is defined as binding together the data and the functions that manipulate them*/

/*Real life example:-
In a company, there are different sections like the accounts section, finance section, sales section, etc. Now,
The finance section handles all the financial transactions and keeps records of all the data related to finance.
All the financial processes are done by this section.
Similarly, the sales section handles all the sales-related activities and keeps records of all the sales.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Class that represents a person
class Person {
    // private members that will be hidden
    int socialID;
    string name;
public:
    // public members that are accessible
    Person(string n, int id) {
        name = n;
        socialID = id;
    }
    string getName() {
        return name;
    }
    bool validateID() {
        if (socialID <= 1001 && socialID >= 0)
            return true;
        else
            return false;
    }
};
int main() {
    Person p1("Shubham", 503);
    if (!p1.validateID()) cout << "Invalid SocialID";
    cout << p1.getName();
    return 0;
}
