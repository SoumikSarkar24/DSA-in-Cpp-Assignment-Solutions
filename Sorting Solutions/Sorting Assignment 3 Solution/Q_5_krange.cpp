#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
float max(float a,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int arr[] = {5,3,10,3};//1.5 3.5 3.5 3.5
    int n = 4;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            kmin = max(kmin,(arr[i]+arr[i+1])/2.0);
        }
        else{
            kmax = min(kmax,(arr[i]+arr[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin==kmax){
            if(kmin-(int)kmin==0){//kmin and kmax are integers
                cout<<"There is only one value of k : "<<kmin;
            }
            else cout<<-1;
        }
    }
    else{
        if(kmin-int(kmin)){
            kmin = (int)kmin + 1;
        }
        cout<<"Range of k is : ["<<kmin<<","<<int(kmax)<<"]";
    }
}