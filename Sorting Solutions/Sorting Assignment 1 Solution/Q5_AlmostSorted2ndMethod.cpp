#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,9,7,8}; // Not almost Sorted
    int n= 5;
    bool flag = true;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(arr[j]>arr[i]) count++;
        }
        int aidx = n - count -1;
        int diff = aidx - i;
        if(diff<0) diff=-diff;
        if(diff>1){
            flag = false;
            break;
        }
    }
    cout<<flag;
}