#include<iostream>
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
    //Taking Transpose
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    //Rotating anticlockwise
    //Outer loop column
    for(int c=0;c<m;c++){
        //reverse the cth column
        int i=0;
        int j=m-1;
        while(i<=j){
            swap(a[i][c],a[j][c]);
            i++;
            j--;
        }
    }
    //printing
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}