#include<bits/stdc++.h>
using namespace std;
int sumofArray(vector<int>&a,int idx){
        if(idx==a.size()-1) return a[idx];
        return a[idx] + sumofArray(a,idx+1);
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<sumofArray(a,0);
}