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
        string s;
        cin>>s;

        for(i=1;i<n;i=i+3)
        {
            if(s[i]!=s[i+1])f=1;
        }

        if(n==1)cout<<"YES"<<endl;
        else if(n==2)cout<<"NO"<<endl;
        else
        {
            if(f==0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }



    return 0;
}
