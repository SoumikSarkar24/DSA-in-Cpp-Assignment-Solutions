#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPerfectSquare(int num) {
        // O(logn) soln
        int x = num;
        int lo = 0;
        int hi = x;
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            long long m = (long long)mid;
            long long y = (long long)x;
            if((m*m)==y) return true; // perfect square
            else if(m*m>y) hi = mid - 1;
            else lo = mid + 1;
        }
        return false; // integer part 
        // O(1) soln
        // int root = sqrt(num);
        // if(root*root==num) return true;
        // else return false;   
    }
};
int main(){
    int n;
    cout<<"Enter a number to check whether it is a Perfect Square or not"<<endl;;
    cin>>n;
    Solution a;
    if(a.isPerfectSquare(n)) cout<<"Yes it is a Perfect Square";
    else cout<<"It is not a Perfect Square";
}