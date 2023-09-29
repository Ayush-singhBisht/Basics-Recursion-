#include<iostream>
using namespace std;
bool pallindrome(string str,int i,int j){
    if(i>j)
    return true;
    
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return pallindrome(str,i+1,j-1);
    }
}

int main(){
    int i=0,j;
    string a;
    cout<<"enter string = ";
    getline(cin,a);
    j=a.size();
    int p=pallindrome(a,i,j-1);
    if(p!=0){
        cout<<"pallindrome";
    }
    else{
        cout<<"not pallindrome";
    }

    return 0;
}