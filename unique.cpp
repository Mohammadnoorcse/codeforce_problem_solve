
#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int n){
    int xor_sum=0;
    for(int i=0;i<n;i++){
        xor_sum = xor_sum^arr[i];
    }
    return xor_sum;

}
int main(){
    int arr[] ={1,2,3,4,1,2,3};
    cout<<unique(arr,7)<<endl;
}
