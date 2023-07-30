
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
string s;
cin>>t;
map<string,int> m;
for(int i=0;i<t;i++){

    cin>>s;
    if(m[s]){
        cout<<s<<m[s]<<endl;
        m[s]++;
    }else{
        cout<<"OK"<<endl;
        m[s]=1;

    }


}



return 0;
}
