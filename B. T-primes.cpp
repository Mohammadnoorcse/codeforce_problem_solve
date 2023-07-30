
#include<bits/stdc++.h>
using namespace std;
int main(){

long long int t,n,count;
cin>>t;
while(t>0 && t--){
    cin>>n;
    count=1;

    for(int j=1;j<=n/2;j++){
        if(n%j==0){
            count++;
        }
        if(count>3){
            break;
        }
    }
    if(count==3){
        cout<<"YES"<<endl;
    }else{
       cout<<"NO"<<endl;

    }

}

}
