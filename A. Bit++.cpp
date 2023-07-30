
#include<bits/stdc++.h>
using namespace std;
int main(){
string a;
int n;
cin>>n;

int count=0;
while(n>0&&n--){
    cin>>a;
    if(a[1]=='-'){
        count--;
    }
    else{
        count++;
    }
}
cout<<count<<endl;



}
