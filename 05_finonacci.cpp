#include <iostream>
using namespace std;

int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cout<<"Enter N : ";
    cin>>n;
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<fib(i);
    }
    

return 0;
}