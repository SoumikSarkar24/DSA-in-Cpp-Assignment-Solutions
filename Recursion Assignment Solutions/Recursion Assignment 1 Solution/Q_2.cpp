#include<iostream>
using namespace std;
void print(int x,int n){
    if(x>n) return;
    cout<<x<<" ";
    print(x+2,n);
}
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    if(a%2==0) a++;
    print(a,b);
}