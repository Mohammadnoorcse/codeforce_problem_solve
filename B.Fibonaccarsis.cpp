
#include<bits/stdc++.h>
using namespace std;

bool check(int a[],int k)
{
    bool t=true;

    for(int i=k-3; i>=0; i--)
    {
        if(a[i+1]+a[i+2]!=a[i])
        {
            t=false;
            break;
        }
    }


    return t;


}

void fabb(int n,int k,int t)
{
    int count=0;

    while(t<n/2 && t++)
    {

        int x=n-t;

        int a[k];
        a[0]=n;
        a[1] =x;

        for(int i=2; i<k; i++)
        {
            int temp=a[i-2]-a[i-1];
            a[i]=temp;

        }
        if(check(a,k)==true){
                count++;
        }


    }

    cout<<count<<endl;







}
int main()
{
    int t;
    cin>>t;
    while(t>0 && t--)
    {
        int n,k;
        cin>>n>>k;

        int counNumber=0,count=0;
        if(n<=k)
        {
            cout<<count<<endl;
        }
        else
        {


            fabb(n,k,1);




        }


    }

    return 0;
}
