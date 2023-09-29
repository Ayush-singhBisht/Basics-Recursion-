#include<iostream>
using namespace std;
void reverse(string &str,int i,int j){
    if(i>j){
        return;
    }
    swap(str[i],str[j]);
    reverse(str,i+1,j-1);
}

int main(){
    int i=0,j;
    string a;
    getline(cin,a);
    
    j=a.length();
    //cout<<a<<endl;
    reverse(a,0,j-1);
    cout<<a;

    return 0;
}