#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s,string t){
    if(s.size() != t.size()) return false;
    else{
        int cnt[26] = {0};
        int n = s.size();
        for(int i=0;i<n;i++){
            cnt[s[i] - 'a']++;
            cnt[t[i] - 'a']--;
        }
        int fl = 0;
        for(int i=0;i<26;i++){
            if(cnt[i]!=0){
                return false;
            }
        }
        return true;
    }
}
int main(){
    string s,t;

    cin>>s>>t;

    if(isAnagram(s,t)) cout<<"Yes";
    else cout<<"No";
}