#include<bits/stdc++.h>
using namespace std;
int main(){

int n,m,a,b;
cin>>n>>m>>a>>b;

int n1=n-m;
if(n1%2==0){
    int result =b+n1*a;
    cout<<result<<endl;
}


return 0;
}
