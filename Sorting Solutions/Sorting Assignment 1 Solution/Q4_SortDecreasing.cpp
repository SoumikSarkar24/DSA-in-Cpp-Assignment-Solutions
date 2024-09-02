#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // int arr[] = {5,1,-90,-70,52,14,12,73,5};
    int arr[] = {1,2,3,4,5};
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Bubble Sort
    for(int i=0;i<n-1;i++){//n-1 passes
        //traverse
        bool flag = true;
        for(int j=n-1;j>=1+i;j--){
            if(arr[j]>arr[j-1]){//swap
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j-1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    //Bubble Sort(Optimised)
    // for(int i=0;i<n-1;i++){//n-1 passes
    //     bool flag = true;
    //     //traverse
    //     for(int j=0;j<n-1-i;j++){
    //         if(arr[j]>arr[j+1]){//swap
    //             // int temp = arr[j];
    //             // arr[j] = arr[j+1];
    //             // arr[j+1] = temp;
    //             swap(arr[j],arr[j+1]);
    //             flag=false;
    //         }
    //     }
    //     if(flag==true){//Swap did'nt happen
    //         break;
    //     }
    // }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}