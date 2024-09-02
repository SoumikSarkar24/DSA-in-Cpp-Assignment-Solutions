#include<iostream>
using namespace std;
void rev(int r,int n){
    if(n==0){
        cout<<r;
        return;
    }
    rev(r*10 + n%10,n/10);
}
int rev(int n){
    return n%10;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    rev(0,n);
}