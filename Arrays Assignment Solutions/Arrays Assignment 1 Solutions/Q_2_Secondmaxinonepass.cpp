#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {2,1,1,10,1,1};
    int n =sizeof(arr)/4;
    int mx = INT_MIN;
    int smx = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            smx = mx;
            mx = arr[i];
        }
        //if(arr[i]>smx && arr[i]!=mx) smx = arr[i]
        else{
            smx = max(smx,arr[i]);
        }
    }
    cout<<mx<<endl;
    if(smx==INT_MIN) cout<<"No Second largest exists";
    cout<<smx<<endl;
}