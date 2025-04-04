#include<iostream>
using namespace std;
class Hero{
    public: //we can access them anywhere outside or insisde of the class
    int health;
    //private: //we can access only inside class not out of the class
    char level;
    //protected : //we can not access outside the class and can be access in inherited class
    void print(){
        cout<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
};
int main(){
    Hero h1;
    //use getter function
    cout<<h1.gethealth()<<endl;
    //use setter function
    h1.sethealth(70);
    //h1.health=10;
    h1.level='A';
    cout<<"Health: "<<h1.gethealth()<<endl;
    cout<<"Level: "<<h1.level<<endl;
    return 0;
}