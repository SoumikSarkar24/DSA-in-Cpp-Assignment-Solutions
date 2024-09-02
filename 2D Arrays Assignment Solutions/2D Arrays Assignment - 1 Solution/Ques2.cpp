#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<"Enter cols: ";
    cin>>n;
    cout<<"Enter elements of 1st Matrix"<<endl;
    int a[m][n],b[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd Matrix"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    //addition
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            b[i][j]+=a[i][j];
            cout<<b[i][j]<< " ";
        }
        cout<<endl;
    }
}