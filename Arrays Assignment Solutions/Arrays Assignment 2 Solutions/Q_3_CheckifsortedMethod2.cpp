#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n];
    bool flag=true;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>=1;i--){
        if(arr[i]<arr[i-1]){
            flag = false;
            break;
    }
    }
    if(flag==true) cout<<"Array is sorted";
    else cout<<"Array is not sorted";  
}