#include <iostream>
using namespace std;

int binarysearch(int arr[],int start,int end,int key){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==key){
        return mid+1 ;
    }

    if(arr[mid]<key){
        return binarysearch(arr,mid+1,end,key);
    }
    else{
    
        return binarysearch(arr,mid-1,end,key);
    
    }
    
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
    int start=0;
    int end=n-1;
    cout<<"Position = "<<binarysearch(arr,start,end,key);
return 0;
}