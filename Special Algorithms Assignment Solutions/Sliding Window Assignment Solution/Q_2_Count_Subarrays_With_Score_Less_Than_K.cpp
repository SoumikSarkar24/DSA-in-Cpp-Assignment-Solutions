#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int i=0,j=0,sum=0,score=0,ans=0;
        long long int n = nums.size();
        while(i<n and j<n){
            sum += nums[j]; //window expansion
            score = sum*(j-i+1);
            while(i<=j and score >= k){
                //window contraction
                sum -= nums[i++];
                score = sum*(j-i+1);
            }
            ans += (j-i+1);
            j++;
        }
        return ans;
    }
};