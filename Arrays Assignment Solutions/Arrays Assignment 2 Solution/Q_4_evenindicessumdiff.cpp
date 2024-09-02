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
        if(i%2==0){
            sum1+=arr[i];
        }
        if(i%2!=0){
            sum2+=arr[i];
        }
    }
    cout<<"The difference reqd is"<<sum1-sum2<<endl;
}