#include<iostream>
using namespace std;
bool isPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main(){
    string s;
    getline(cin,s);
    if(isPalindrome(s)==true)
        cout<<"String is Palindrome";
    else
        cout<<"String is not Palindrome";
}