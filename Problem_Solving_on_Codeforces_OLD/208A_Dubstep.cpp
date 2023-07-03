#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll i,j=0;
    string s1;
    cin>>s1;
    char s2[205]; ///final string which we will print

    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B')
        {
            i+=2;
            s2[j]=' ';
            j++;
        }
        else
        {
            s2[j]=s1[i];
            j++;
        }
    }
    s2[j]='\0';

    for(i=0;s2[i]!='\0';i++)
    {
        cout<<s2[i];
    }
    cout<<endl;

    return 0;
}


///012 3
