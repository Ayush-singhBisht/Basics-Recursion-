#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start+end)/2;
    int l1= mid-start+1;
    int l2=end-mid;

    int *first=new int[l1];
    int *second=new int[l2];

    int k=start;
    for(int i=0;i<l1;i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<l2;i++){
        second[i]=arr[k++];
    }

    int index1=0;
    int index2=0;
    k=start;

    while(index1<l1 && index2<l2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }

    while(index1<l1){
        arr[k++]=first[index1++];
    }
    while(index2<l2){
        arr[k++]=second[index2++];
    }



}

void sort(int *arr, int start, int end)
{

    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    sort(arr, start, mid);
    sort(arr, mid + 1, end);

    merge(arr, start, end);
}

int main()
{
    int arr[5] = {7, 3, 6, 5, 4};
    sort(arr, 0, 4);
    cout<<"array is "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}