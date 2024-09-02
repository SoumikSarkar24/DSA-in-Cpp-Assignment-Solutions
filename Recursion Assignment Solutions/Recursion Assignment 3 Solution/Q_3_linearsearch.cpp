#include<bits/stdc++.h>
using namespace std;
int search(vector<int>&a , int idx , int tgt){
    if(idx==a.size()) return -1;
    if(a[idx]==tgt) return idx;
    return search(a,idx+1,tgt);
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int tgt;
    cin>>tgt;
    cout<<search(a,0,tgt);
}