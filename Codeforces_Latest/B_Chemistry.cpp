#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        int x=0,y=k;

        for(char i='a';i<='z';i++)
        {
           if(y==0)break;
           if(mp[i]%2)
           {
                mp[i]--;
                y--;
           }
        }

        for(char i='a';i<='z';i++)
        {
            if(y==0)break;
            if(mp[i]>0)
            {
                if(mp[i]<=y)
                {
                    y-=mp[i];
                    mp[i]=0;
                }
                else if(mp[i]>y)
                {
                    mp[i]-=x;
                    y=0;
                }
            }
        }

        for(char i='a';i<='z';i++)
        {
            if(mp[i]%2)x++;
        }

        if(x>1)cout<<"NO\n";
        else cout<<"YES\n";

    }
    return 0;
}