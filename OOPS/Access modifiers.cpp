#include<iostream>
using namespace std;
class Hero{
    public: //we can access them anywhere outside or insisde of the class
    int health;
    private: //we can access only inside class not out of the class
    char level;
    void print(){
        cout<<level<<endl;
    }
};
int main(){
    Hero h1;
    h1.health=10;
    h1.level='A';
    cout<<"Health: "<<h1.health<<endl;
    cout<<"Level: "<<h1.level<<endl;
    return 0;
}