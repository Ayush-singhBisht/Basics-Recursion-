#include<iostream>
using namespace std;
void sort(int *arr,int n){
    if(n==1||n==0){
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    }
    sort(arr,n-1);
    

}

int main(){
    int arr[5]={7,3,6,5,4};
    sort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
    return 0;
}