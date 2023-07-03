#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n],i,x,y,z,f=0,even=0,odd=0,m,d,o,p,q,r,f2=0,j;
        for(i=0; i<n; i++)cin>>a[i];

        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)even++;
            else if(a[i]%2!=0)
            {
                odd++;
                if(f2==0)
                {
                    p=i+1;
                    f2=1;
                }
                else if(f2==1)
                {
                    q=i+1;
                    f2=2;
                }
                else if(f2=3)
                {
                    j=i+1;
                }

            }
        }

        if(even>=2)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    if(f==0)
                    {
                        //x=a[i];
                        //p=a[i];
                        r=i+1;
                        m=i+1;
                        f=1;
                    }
                    else if(f==1)
                    {
                        //y=a[i];
                        d=i+1;
                        f=-1;
                    }
                }
            }
        }
        if(odd>=3)cout<<"YES"<<endl<<p<<" "<<q<<" "<<j<<endl;
        else if(even>=2 && odd>=1)cout<<"YES"<<endl<<m<<" "<<d<<" "<<p<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}

