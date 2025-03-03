// Power of two-If it is a power of 2 then return true else return false
// Input:-1
// Output:true

// Explanation:- 2^0=1->True(bcoz it is power of 2)
// Approach 1(Bruteforce) => 2^0......2^31->(if no. lies in this range then it is true otherwise false)
// Approach 2(Optimal) => INT_MIN=-2^31 and INT_MAX=2^31-1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool approach1(int n){
    for(int i=0;i<=30;i++){
        int a=pow(2,i);
        if(a==n){
            return true;
        }
    }
    return false;
}
bool approach2(int n){
    int a=1;
    for(int i=0;i<=30;i++){
        if(a==n){
            return true;
        }
        if(a<INT_MAX/2){
            a=a*2;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int b=approach1(n);
    int c=approach2(n);
    cout<<b<<endl;
    cout<<c<<endl;
}