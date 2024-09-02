#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,2,3,7,9};
    int n =sizeof(arr)/4;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(arr[i]!=i+1){
            flag=true;
            cout<<i+1;
            break;
        }
    }
    if(flag==false){
        cout<<"There was no missing element";
    }
}