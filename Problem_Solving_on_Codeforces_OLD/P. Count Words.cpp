#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,word=1;
    string s;
    getline(cin,s);
    for(i=0;i<s.size();i++)
    {
        if(s[i]==',' || s[i]=='.' || s[i]=='!')s[i]=' ';
    }
    for(i=1;i<s.size();i++)
    {
        if((s[i]==' ') && ((s[i+1]>='a' && s[i+1]<='z')||(s[i+1]>='A' && s[i+1]<='Z')))
           {
               word+=1;
           }
           else continue;

    }
    cout<<word<<endl;

    return 0;
}
