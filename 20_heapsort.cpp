#include <iostream>
#include <vector>
using namespace std;

int heapify(vector<int>&arr,int n,int i){
    int grt = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left]>arr[grt]){
        grt = left;
    }
    if(right < n && arr[right]>arr[grt]){
        grt = right;
    }

    if(grt != i ){
        swap(arr[i],arr[grt]);
        heapify(arr,n,grt);
    }
}

int heapSort(vector<int>&arr){
    int n = arr.size();

    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    

    for(int i=n-1;i>0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

int main(){
    vector<int>arr = {4,5,6,3,2,1};
    
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    heapSort(arr);

    for(int i:arr){
        cout<<i<<" ";
    }
}