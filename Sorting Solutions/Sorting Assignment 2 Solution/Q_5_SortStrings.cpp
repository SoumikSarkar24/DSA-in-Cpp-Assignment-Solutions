#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[] = {"raghav","urvi","harsh","vishwa","sanket","manvi","hyder","priya","sudhanshu"};
    int n = 9;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    //Bubble Sort(Optimised)
    for(int i=0;i<n-1;i++){
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}