#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int fun(int i,int s,int sum,int arr[],int n){
    if(s>sum)return 0;
    if(i==n){
        if(s==sum){
            return 1;
        }
        else return 0;
    }
    s+=arr[i];
    int left = fun(i+1,s,sum,arr,n) ;

    s-=arr[i];
    int right = fun(i+1,s,sum,arr,n);

    return left+right;
}

int main(){
    int arr[] = {1,2,1};
    int n=3,sum=2;
    
    vector<int>ds;
    cout<<fun(0,0,sum,arr,n);;
return 0;
}
