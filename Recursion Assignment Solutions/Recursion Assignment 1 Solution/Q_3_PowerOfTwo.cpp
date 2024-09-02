#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1) return true;
        if(n==0 || n%2!=0) return false;
        return isPowerOfTwo(n/2);
    }
};
int main(){
    Solution a;
    int n;
    cin>>n;
    if(a.isPowerOfTwo(n)) cout<<"Yes It is Power of 2";
    else cout<<"No It is not a power of 2";
}