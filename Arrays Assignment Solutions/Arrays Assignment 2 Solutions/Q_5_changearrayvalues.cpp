#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter array size"<<endl;
    cin>>n;
    int arr[n],sum1=0,sum2=0;
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(i%2==0) arr[i]+=10;
        else arr[i]*=2;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}