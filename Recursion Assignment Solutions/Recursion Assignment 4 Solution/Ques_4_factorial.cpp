#include<iostream>
using namespace std;
int fact(int n){
    if(n==1||n==0) return 1;
    int ans = n*fact(n-1);
    return ans;
}
int main(){
    int n;
    cout<<"Enter any number to find factorial"<<endl;
    cin>>n;
    cout<<fact(n);
}