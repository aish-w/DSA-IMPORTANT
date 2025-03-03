// Reverse integer
// Input:-123
// Output:-321

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverseint(int x){
    int a=0;
    while(x!=0){
        int digit=x%10;
        a=(a*10)+digit;
        x=x/10;
    }
    return a;
}
int main(){
    int n;
    cin>>n;
    int b=reverseint(n);
    cout<<b<<endl;
}