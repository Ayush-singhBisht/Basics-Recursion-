#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

void fun(int i,vector<int>&ds,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            for(auto i: ds){
            cout<<i<<" ";
            }
            cout<<endl;
        }

        return;
    }
    // pushback till i=3 ---> as base condition true print {3,2,1}
    ds.push_back(arr[i]);
    s+=arr[i];
    fun(i+1,ds,s,sum,arr,n);
    // remove element as i=3 ---> as base condition true print {3,2}
    ds.pop_back();
    s-=arr[i];
    fun(i+1,ds,s,sum,arr,n);
}

int main(){
    int arr[] = {1,2,1};
    int n=3,sum=2;
    
    vector<int>ds;
    fun(0,ds,0,sum,arr,n);
return 0;
}
