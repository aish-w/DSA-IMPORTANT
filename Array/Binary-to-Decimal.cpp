//BINARY-TO-DECIMAL CONVERSION
// Input:-1000
// Output:-8

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0,i=0;
    while(n!=0){
        int d=n%10;
        if(d==1){
            a=a+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<a;
}