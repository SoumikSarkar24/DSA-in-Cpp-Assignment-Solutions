#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>>matrix(n,vector<int>(n));
    int minr=0,minc=0;
    int maxr = n-1,maxc=n-1;
    int tne = n*n;
    int count = 0;
    int a = 1;
    while(count<tne){
        //Right
        for(int j=minc;j<=maxc && count<tne;j++){
            matrix[minr][j] = a++;
            count++;
        }
        minr++;
        //Down
        for(int i=minr;i<=maxr && count<tne;i++){
            matrix[i][maxc] = a++;
            count++;
        }
        maxc--;
        //Left
        for(int j=maxc;j>=minc && count<tne;j--){
            matrix[maxr][j] = a++;
            count++;
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr && count<tne;i--){
            matrix[i][minc] = a++;
            count++;
        }
        minc++;
    }
    return matrix;
    }
};
int main(){
    Solution a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a.generateMatrix(n)[i][j]<<" ";
        }
    }
}