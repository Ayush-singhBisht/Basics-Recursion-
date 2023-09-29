#include <iostream>
using namespace std;

int search(int arr[],int n,int key){
    if(n<0){
        return -1;
    }
    if(arr[n]==key){
        return n+1 ;
    }

    return search(arr,n-1,key);
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
    int key;
    cout<<endl<<"enter element to find : ";
    cin>>key;
    cout<<endl;
    cout<<search(arr,n,key);
return 0;
}