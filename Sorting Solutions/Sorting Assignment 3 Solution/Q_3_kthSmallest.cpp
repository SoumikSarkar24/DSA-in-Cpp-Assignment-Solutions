#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,14,8,2,4,7,6,5,3,9,1};
    int n = 11;
    int k = 2;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // selection sort upto k
    for(int i=0;i<k;i++){
        int min = arr[i];
        int mindx = i;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr[k-1];
}