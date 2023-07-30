#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,b,c,d;
    cin>>n;
    while(n>0 && n--)
    {


        cin>>a>>b>>c>>d;
        int count=0;
        if(a<b && a<c && a<d)
        {
            count=3;;
        }
        else if((a<b && a<c && a>d) || (a<b && a>c && a<d)|| (a>b && a<c && a<d))
        {
            count=2;
        } else if((a>b && a>c && a>d))
        {
            count=0;
        }
        else
        {
            count=1;

        }

        cout<<count<<endl;
    }



}
