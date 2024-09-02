#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,-3,2,-5,-2,6,3};
    int n = sizeof(arr)/4;
    int mn = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<mn) mn =arr[i];
    }
    cout<<mn;
}