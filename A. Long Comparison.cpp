#include<bits/stdc++.h>
using namespace std;
int main(){
int t,x1,x2,p1,p2;
cin>>t;
while(t>0 && t--){

    cin>>x1>>p1;
    cin>>x2>>p2;

    int s2=x2*pow(10,p2);
    if(x1*pow(10,p1)>s2){
        cout<<">"<<endl;
    }
    else if(x2*pow(10,p1)<s2){
        cout<<"<"<<endl;
    }
    else{
        cout<<"="<<endl;
    }
}



}
