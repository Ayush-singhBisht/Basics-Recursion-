#include<bits/stdc++.h>
using namespace std;

void solution(vector<int>nums,vector<int>output,int i,vector<vector<int>>&ans){
            //original set      to store ele of os              output set
    if(i>=nums.size()){         //nums={A,B,C} i->A
        ans.push_back(output);
        return;
    }

    solution(nums,output,i+1,ans);  //sumsets excludeing i=>A

    int elements = nums[i];         ////sumsets includeing i=>A
    output.push_back(elements);
    solution(nums,output,i+1,ans);
}

vector<vector<int>>subset(vector<int>&nums){
    vector<vector<int>>ans;
    vector<int>output;
    int index = 0;
    solution(nums,output,index,ans);
    return ans;
}


int main(){
    vector<int>ans{1,2,3};
    subset(ans);
    for(int x : ans){
        cout<<x<<" ";
    }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
    return 0;
}