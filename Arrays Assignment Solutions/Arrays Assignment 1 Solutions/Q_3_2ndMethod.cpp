#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,-3,2,-5,-2,6,3};
    int n =sizeof(arr)/4;
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        mn = min(mn,arr[i]);
        //mn = amin(mn,arr[i]);
    }
    cout<<mn;
}