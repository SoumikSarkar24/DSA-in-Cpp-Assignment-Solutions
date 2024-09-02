#include<iostream>
using namespace std;
int bs(int lo, int hi, int arr[], int t){
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==t) return mid;
        else if(arr[mid]>t) lo = mid + 1;
        else hi = mid - 1;
    }
    return -1;
}
int main(){
    int arr[] = {10,9,7,5,3,0,-1,-4};
    int n = sizeof(arr)/4;
    int t;
    cout<<"Enter target element : ";
    cin>>t;
    cout<<bs(0,n-1,arr,t);
}