#include<iostream>
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
    int x1,y1,x2,y2;
    cout<<"Enter the first coordinates: ";
    cin>>x1>>y1;
    cout<<"Enter the first coordinates: ";
    cin>>x2>>y2;
    int sum=0;
    //addition
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            sum+=a[i][j];
        }
    }
    cout<<sum;
}