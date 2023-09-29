#include <iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }
    return sum(arr,n-1)+arr[n-1];
}

int main(){
    int n,i;
    cout<<"Enter size of a arrray : ";
    cin>>n;
    int arr[n];
    cout<<endl<<"Enter array elements : ";
    for ( i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    cout<<sum(arr,n);
return 0;
}