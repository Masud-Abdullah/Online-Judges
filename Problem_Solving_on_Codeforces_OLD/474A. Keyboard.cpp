#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll i,j;
    char ch;
    cin>>ch;
    string str1,str2="qwertyuiop asdfghjkl; zxcvbnm,./";
    cin>>str1;

    if(ch=='R')
    {
        for(i=0; i<str1.size(); i++)
        {
            for(j=0;j<str2.size();j++)
            {
                if(str1[i]==str2[j])
                {
                    cout<<str2[j-1];
                }
            }
        }
    }
    else if(ch=='L')
    {
        for(i=0; i<str1.size(); i++)
        {
            for(j=0;j<str2.size();j++)
            {
                if(str1[i]==str2[j])
                {
                    cout<<str2[j+1];
                }
            }
        }
    }


    return 0;
}


