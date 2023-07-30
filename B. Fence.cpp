#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int minSum =INT_MAX;
    int sum=0,j=0,m=0,r;
    if(n==1){
        cout<<1<<endl;

    }else{
    for(int i=1;i<=n-k;i++){
        sum=0;
        j=0;
        m=i;
        while(j<k){
            sum=sum+a[m];
            m++;j++;
        }

        if(sum<minSum){
            minSum =sum;
            r=i;

        }




    }
    cout<<r<<endl;


    }


}
