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
    //Printing the row and columns
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==m/2 or j==m/2) cout<<a[i][j]<<" ";
            else cout<<" "<<" ";

        }
        cout<<endl;
    }
}
