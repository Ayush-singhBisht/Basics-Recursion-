#include <iostream>
using namespace std;

bool sorted(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return sorted(arr+1,n-1);
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
    if(sorted(arr,n)){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }


return 0;
}