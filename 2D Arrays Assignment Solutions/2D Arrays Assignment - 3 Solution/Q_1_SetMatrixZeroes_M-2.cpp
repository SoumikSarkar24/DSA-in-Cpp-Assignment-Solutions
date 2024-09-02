#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<bool> row(m,false);
        vector<bool> col(n,false);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i] = true;//true means it will be set to 0
                    col[j] = true;
                }
            }
        }
        //Set rows to zero
        for(int i=0;i<m;i++){
            if(row[i]==true){
                for(int j=0;j<n;j++){
                    matrix[i][j] = 0;
                }
            }
        }
        // Set cols to zero
        for(int j=0;j<n;j++){
            if(col[j]==true){
                for(int i=0;i<m;i++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};