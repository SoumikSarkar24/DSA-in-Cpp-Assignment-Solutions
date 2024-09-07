#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void go(vector<int>&nums,int idx,vector<vector<int>>&v,vector<int>&temp){
        if(idx==nums.size()){
            v.push_back(temp);
            return;
        }
        go(nums,idx+1,v,temp); //not pick
        // pick
        temp.push_back(nums[idx]);
        go(nums,idx+1,v,temp);
        temp.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>temp;
        go(nums,0,v,temp);
        return v;
    }
};