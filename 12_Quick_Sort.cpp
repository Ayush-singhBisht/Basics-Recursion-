#include <iostream>
using namespace std;


int piovet(int arr[],int start,int end){
    int piv=arr[start];
    int i=start;
    int j=end;
    while(i<j){
        while(arr[i]<=piv){
            i++;
        }
        while(arr[j]>piv){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }swap(arr[j],arr[start]);
    return j;
}

void sort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int piv=piovet(arr,start,end);
    sort(arr,start,piv-1);
    sort(arr,piv+1,end);
}


int main()
{
    int arr[7] = {1,7,3,9,6,5,4};
    sort(arr,0,7);
    cout<<"array is "<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}