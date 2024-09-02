#include<iostream>
using namespace std;
void print(int x,int n){
    if(x>=n){
        cout<<n<<" ";
        return;
    }
    cout<<x<<" ";
    print(x+1,n);
    cout<<x<<" ";
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    print(1,n);
}