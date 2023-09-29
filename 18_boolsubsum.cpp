#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

bool fun(int i,vector<int>&ds,int s,int sum,int arr[],int n){
    if(i==n){
        if(s==sum){
            for(auto i: ds){
            cout<<i<<" ";
            }
            cout<<endl;
            return true;
        }
        //maza nahi aya
        return false;
    }
    // pushback till i=3 ---> as base condition true print {3,2,1}
    ds.push_back(arr[i]);
    s+=arr[i];
    if(fun(i+1,ds,s,sum,arr,n)) return true;
    // remove element as i=3 ---> as base condition true print {3,2}
    ds.pop_back();
    s-=arr[i];
    if(fun(i+1,ds,s,sum,arr,n))return true;

    return false;
    
}

int main(){
    int arr[] = {1,2,1};
    int n=3,sum=2;
    
    vector<int>ds;
    fun(0,ds,0,sum,arr,n);
return 0;
}
