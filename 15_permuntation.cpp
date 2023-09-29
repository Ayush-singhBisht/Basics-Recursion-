#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sol(vector<int>nums,vector<vector<int>>&ans,int index){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i = index;i<nums.size();i++){
            swap(nums[index],nums[i]);
            sol(nums,ans,index+1);
            swap(nums[index],nums[i]); //backtrack
        }
        
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int index =0 ;
        sol(nums,ans,index);
        return ans;
    }
};