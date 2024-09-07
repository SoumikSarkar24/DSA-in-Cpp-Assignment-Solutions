#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        int n = a.size();

        for(int i=0;i<n;i++){
            while(a[i] != a[a[i]-1])swap(a[i] , a[a[i]-1]);
        }

        vector<int>answer;

        for(int i=0;i<n;i++){
            if(a[i] != i+1)answer.push_back(a[i]);
        }

        return answer;
    }
};