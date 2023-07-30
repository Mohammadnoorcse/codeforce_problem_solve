#include<bits/stdc++.h>
using namespace std;
int main(){

int t,n;
cin>>t;
while(t>0 && t--){
    int k=2;
    int x=0;
    cin>>n;
    while(true){
            int s=pow(2,k)-1;
         x=n/s;

        if(n==s*x){
            cout<<x<<endl;
            break;

        }
        k++;
    }
}


return 0;
}
