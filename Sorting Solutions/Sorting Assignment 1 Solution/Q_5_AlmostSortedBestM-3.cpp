#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,9,7,8};
    // int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //almost sorted
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            i++;
        }
    } // 2 4 7 9 8
    //Check if modified array is sorted or not
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }
    if(flag==true) cout<<"Almost Sorted";
    else cout<<"Not Almost Sorted";
}