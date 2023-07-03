#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,cnt_2=0,cnt=0,indx=0;
        cin>>n;
        ll a[n];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]==2)cnt_2++;
        }

        if(cnt_2==0)cout<<1<<endl;
        else if(cnt_2%2!=0)cout<<-1<<endl;
        else
        {
            for(i=1;i<=n;i++)
            {
                if(a[i]==2)cnt++;

                if(cnt_2/2 == cnt)
                {
                    indx=i;
                    break;
                }
            }
            cout<<indx<<endl;
        }


    }



    return 0;
}




















/*#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        int n,i,j,ans=1,indx,f=0;
        cin>>n;
        int a[n+1];
        a[0]=1;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            ans*=a[i];
        }


        for(i=1;i<=n;i++)
        {
            a[i]=(a[i]*a[i-1]);
        }

        for(i=1;i<=n-1;i++)
        {
            if(a[i]==(ans/a[i]))
            {
                f=1;
                indx=i;
                break;
            }else continue;
        }

        if(f==1)cout<<indx<<nl;
        else if(f==0)cout<<-1<<nl;


    }



    return 0;
}

*/
