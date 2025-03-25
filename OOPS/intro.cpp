#include<iostream>
#include "Hero.cpp"    //another way of calling the class making new file
using namespace std;
// class Hero{
//     //properties
//     // char name[100];
//     // int health;
//     // char level;
//     int health;

// };
int main(){
    //creation of object
    //Hero h1;
    Hero h2;
    //cout<<"size: "<<sizeof(h1)<<endl; //size: 4
    cout<<"helth: "<<h2.health<<endl;
    cout<<"helth: "<<h2.level<<endl;
    return 0;
}