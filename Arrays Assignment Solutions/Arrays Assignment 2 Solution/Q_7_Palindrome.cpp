#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,1,4,2,3,4,5,5};
    int n =sizeof(arr)/4;
    int i=0;
    int j = n-1;
    bool flag = true;//true->Palindrome
    while(i<j){
        if(arr[i]!=arr[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    if(flag==true){
        cout<<"Array is Palindrome";
    }
    else{
        cout<<"Array is not palindrome";
    }
}