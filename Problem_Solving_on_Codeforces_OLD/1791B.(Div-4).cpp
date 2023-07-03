#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,x=0,y=0,f=0;
        cin>>n;
        string s;
        cin>>s;

        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='L')x-=1;
            else if(s[i]=='R')x+=1;
            else if(s[i]=='U')y+=1;
            else if(s[i]=='D')y-=1;

            if(x==1 && y==1)
            {
                f=1;
                break;
            }

        }


        if(f==1)cout<<"YES"<<endl;
        else if(f==0)cout<<"NO"<<endl;


    }
    return 0;
}


