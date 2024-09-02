#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int copy[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                copy[i][j] = matrix[i][j];
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(copy[i][j]==0){
                    for(int c=0;c<n;c++){
                        matrix[i][c] = 0;
                    }
                    for(int r=0;r<m;r++){
                        matrix[r][j] = 0;
                    }
                }
            }
        }
    }
};