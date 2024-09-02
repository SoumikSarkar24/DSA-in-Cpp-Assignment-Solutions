#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<"Enter cols: ";
    cin>>n;
    cout<<"Enter elements of 1st Matrix"<<endl;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int maxSum = INT_MIN;
    int maxRow = -1;
    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum += a[i][j];
        }
        if(sum>maxSum){
            maxSum = sum;
            maxRow = i;
        }
    }
    cout<<maxSum<<" "<<maxRow;
}