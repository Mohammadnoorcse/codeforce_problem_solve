
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0; i<s.size(); i++)
    {
        char x = s[i];
        if (x == 'a' || x == 'e' || x == 'i' ||
                x == 'o' || x == 'u')
        {
            continue;
        }
        else{

            cout<<"."<<s[i];
        }
    }

    cout<<endl;




    return 0;
}
