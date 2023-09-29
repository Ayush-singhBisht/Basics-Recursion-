#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void fun(int i,vector<int>&ds,int arr[],int n){
    if(i==n){
        for(auto i: ds){
        cout<<i<<" ";
        }
        cout<<endl;

        return;
    }
    // pushback till i=3 ---> as base condition true print {3,2,1}
    ds.push_back(arr[i]);
    fun(i+1,ds,arr,n);
    // remove element as i=3 ---> as base condition true print {3,2}
    ds.pop_back();
    fun(i+1,ds,arr,n);
}

int main(){
    int arr[] = {3,2,1};
    int n=3;
    vector<int>ds;
    fun(0,ds,arr,n);
return 0;
}
