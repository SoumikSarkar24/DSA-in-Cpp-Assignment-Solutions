#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool zerothRow = false;//False means there is no 0 in 0th row
        bool zerothCol = false;//False means there is no 0 in 0th col
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                zerothRow = true;
                break;
            }
        }
        for(int i=0;i<m;i++){
            if(matrix[i][0]==0){
                zerothCol = true;
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0] = 0; //row vector
                    matrix[0][j] = 0; //col vector
                }
            }
        }
        for(int j=1;j<n;j++){//col vector
            if(matrix[0][j]==0){
                for(int i=1;i<m;i++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i=1;i<m;i++){//row vector
            if(matrix[i][0]==0){
                for(int j=1;j<n;j++){
                    matrix[i][j] = 0;
                }
        }
        }
        //zerothRow
        if(zerothRow==true){
            for(int j=0;j<n;j++){
                matrix[0][j] = 0;
            }
        }
        //zerothCol
        if(zerothCol==true){
            for(int i=0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
    }
};