#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows/cols: ";
    cin>>m;
    cout<<"Enter elements of 1st Matrix"<<endl;
    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    //Printing the Diagonal elements
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if((i==j) or (i+j==m-1)) cout<<a[i][j]<<" ";
            else cout<<" "<<" ";

        }
        cout<<endl;
    }
}