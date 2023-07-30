#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;

while(t>0 && t--){
    cin>>n;
    int a[n];
    int max_num=INT_MIN;
    int min_num=INT_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<min_num){
            min_num=a[i];
        }
        if(a[i]>max_num){
            max_num=a[i];
        }
    }

    cout<<max_num-min_num<<endl;
}




}
