#include<bits/stdc++.h>
using namespace std;
class Solution {
    
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();

        int sum = 0;
        int avg = 0;
        int ans = 0;
        for(int i=0;i<k;i++) sum += arr[i];
        avg = sum/k;
        if(avg >= threshold) ans++;

        int i = k;

        while(i < n){
            sum -= arr[i-k];
            sum += arr[i];
            avg = sum/k;
            if(avg >= threshold) ans++;
            i++;
        }

        return ans;
    }
};