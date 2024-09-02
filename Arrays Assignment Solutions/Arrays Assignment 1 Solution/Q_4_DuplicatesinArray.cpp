#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,-3,2,-5,3,6,3};
    int n =sizeof(arr)/4;
    bool flag = false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
        if(flag==true) break;
    }
    if(flag==true) cout<<"Contains Duplicate";
    else cout<<"All elements are unique";
}