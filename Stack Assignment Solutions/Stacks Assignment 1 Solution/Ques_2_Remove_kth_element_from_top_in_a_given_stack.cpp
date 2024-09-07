#include<bits/stdc++.h>
using namespace std;
void removekthElement(int k , stack<int>&s){
    stack<int>temp;

    k--;
    while(k--){
        temp.push(s.top());
        s.pop();
    }

    s.pop();

    while(!temp.empty()){
        s.push(temp.top());
        temp.pop();
    }
}
int main(){
    stack<int>s1;

    for(int i=0;i<10;i++)s1.push(i);

    removekthElement(4 , s1);

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
}