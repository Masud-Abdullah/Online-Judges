#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        map<int,int>mp;
        string s;cin>>s;
        string ans="1234567890";
        for(int i=0;i<ans.size();i++)
        {
            mp[ans[i]-'a']=i;
        }

        int cnt=4,x=0,y=0;
        for(int i=1;i<=4;i++)
        {
            cnt+=abs(mp[s[x]-'a']-(mp[ans[y]-'a']));
            y=mp[s[x]-'a'];
            x++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}