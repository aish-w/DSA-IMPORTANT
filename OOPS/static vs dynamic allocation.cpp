#include<iostream>
using namespace std;
class Hero{
    public: //we can access them anywhere outside or insisde of the class
    int health;
    //private: //we can access only inside class not out of the class
    char level;
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
    //static allocation
    Hero h1;
    h1.sethealth(80);
    h1.setlevel('B');
    cout<<"level:- "<<h1.level<<endl;
    cout<<"health:- "<<h1.gethealth()<<endl;

    //dynamic allocation
    Hero *h2=new Hero;
    h2->sethealth(82);
    h2->setlevel('C');
    cout<<"level:- "<<(*h2).level<<endl;
    cout<<"health:- "<<(*h2).gethealth()<<endl;

    cout<<"level:- "<<h2->level<<endl;
    cout<<"health:- "<<h2->gethealth()<<endl;
}