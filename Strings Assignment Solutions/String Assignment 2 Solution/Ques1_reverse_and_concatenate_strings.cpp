#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;

    string temp = str;
    reverse(temp.begin(),temp.end());

    str += temp;

    cout<<str<<endl;

}