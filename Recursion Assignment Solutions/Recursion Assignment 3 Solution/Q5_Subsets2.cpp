#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void go(vector<int>&nums,int idx,vector<int>&temp,vector<vector<int>>&ans){
        ans.push_back(temp);
        for(int i = idx;i<nums.size();i++){
            //pick
            if(i!=idx and nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            go(nums,i+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>temp;
       sort(nums.begin(),nums.end());
       go(nums,0,temp,ans);
       return ans; 
    }
};
