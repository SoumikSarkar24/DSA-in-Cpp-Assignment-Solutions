#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrangeCoins(int n) {
        long long t = (long long)(2*(long long)(n)); // t = k(k+1)
        long long d = 4*t + 1;
        int k = (sqrt(d) - 1)/2;
        return k;
    }
};
int main(){
    Solution a;
    int n;
    cin>>n;
    cout<<a.arrangeCoins(n);
}