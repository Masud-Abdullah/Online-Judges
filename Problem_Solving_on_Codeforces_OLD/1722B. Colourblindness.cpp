#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,f=0;
        cin>>n;

        string s1,s2;
        cin>>s1;
        cin>>s2;

        for(i=0;i<n;i++)
        {
            if(s1[i]==s2[i])f++;
            else if((s1[i]=='G'|| s1[i]=='B')&& (s2[i]=='B'|| s2[i]=='G'))f++;
            else break;
        }
        if(f==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

            //cout<<f<<endl;
    }

    return 0;
}
