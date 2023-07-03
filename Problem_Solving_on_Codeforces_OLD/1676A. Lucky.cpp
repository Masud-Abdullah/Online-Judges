#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,sum1=0,sum2=0;
        string s;
        cin>>s;

        for(i=0;i<=2;i++)
        {
            sum1+=s[i]-48;
        }

        for(i=s.size()-1;i>=s.size()-3;i--)
        {
            sum2+=s[i]-48;
        }

        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
