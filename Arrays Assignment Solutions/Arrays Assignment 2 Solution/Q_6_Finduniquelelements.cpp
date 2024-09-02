#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,1,4,2,3,4,5,5};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n;j++){
            if(j==i) continue;
            if(arr[i]==arr[j]){
                //Not Unique
                flag=false;
                break;
            }
        }
        if(flag==true){//arr[i] is unique
            cout<<arr[i];
            break;
        }
    }
}