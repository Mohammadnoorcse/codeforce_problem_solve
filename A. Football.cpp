
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char a[n][100];
    int count=0;
    int sumMax=0;
    string s;
    if(n==1){
        cin>>s;
        cout<<s<<endl;
    }else{

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
            count=1;
        for(int j=i+1;j<n;j++){
            if(strcmp(a[i],a[j])==0){
                count++;
            }
        }
        if(count>sumMax){
            sumMax=count;
            s=a[i];
        }


    }

    cout<<s<<endl;


    }


}
