//Find Unique 
//Input:- [1,2,4,1,2]
//Output:- 4

//a^a=0 and 0^a=a use this xor concept
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int unique(vector<int>& arr,int n){
    int a=0;
    for(int i=0;i<n;i++){
        a=a^arr[i];
    }
    return a;
}
int main(){
    vector<int> arr={1,2,4,1,2};
    int ans=unique(arr,5);
    cout<<ans;
}