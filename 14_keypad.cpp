#include<bits/stdc++.h>
using namespace std;
    
    void sol(string digits,string output,int index,vector<string>&ans,string mapping[]){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        
        int number = digits[index]-'0';       //67-65-2
        string value = mapping[number];
        
        for(int i = 0;i<value.length();i++){
            output.push_back(value[i]);
            sol(digits,output,index+1,ans,mapping);
            output.pop_back(); //backtracking by removing so elemet wont repeat
        }
    }
    
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        
        if(digits.length()==0)
            return ans;
        
        string output ="";
        int index=0;
        
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        sol(digits,output,index,ans,mapping);
        
        return ans;
        
    }


int main(){

    return 0;
}