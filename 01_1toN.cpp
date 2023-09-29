#include <iostream>
using namespace std;

int num(int n,int i){
    if(i==n){
        return n;
    }
    cout<<i<<endl;
    num(n,i+1);

}

int main(){
    int n,i=1;
    cout<<"Enter N : ";
    cin>>n;
    cout<<endl;
    num(n,i);
return 0;
}