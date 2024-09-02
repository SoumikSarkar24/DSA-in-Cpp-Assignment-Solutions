#include<iostream>
#include<climits>
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
    int max = INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]>max) max = a[i][j];
        }
    }
    cout<<max;
}