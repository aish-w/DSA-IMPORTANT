// Complement of Base 10 integer
// Input:-5
// Output:-2

// Explanation:-  5 -> 101 ->(inverse)-> 010 -> 2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bitwisecomplement(int n){
    int m=n;
    int mask=0;
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }
    int a=(~n)&mask;
    return a;
}
int main(){
    int n;
    cin>>n;
    int b=bitwisecomplement(n);
    cout<<b<<endl;
}