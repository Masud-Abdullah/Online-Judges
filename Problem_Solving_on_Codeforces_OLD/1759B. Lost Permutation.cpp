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
       ll m,s,i;
       cin>>m>>s;

       ll cnt[1001]={0};
       ll mx=0;///sorboccho element;

       ll x;

       for(i=0;i<m;i++)
       {
          cin>>x;

          mx=max(mx,x);

          cnt[x]=1;
       }

       for(i=1;i<=mx;i++)
       {
           if(cnt[i]==0)
           {
               s-=i;
           }
       }


       while(s>0)
       {
           mx++;
           s-=mx;
       }

       if(s==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;


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
        ll m,s,i,b_sum=0,f=-1;
        cin>>m>>s;
        ll b[m];

        for(i=1;i<=m;i++)
        {
            cin>>b[i];
            b_sum+=b[i];
        }

        sort(b,b+m);
        ll sum1 =b_sum+s;
        ll sum2=0;

        ll sum=0;
        ll y=s;

        for(i=1;i<=b[m];i++)sum+=b[m];
        ll x=sum-b_sum;

        //for(i=1;sum2>sum1;i++)

        i=1;
        while(1)
        {
            sum2+=i;
            if(sum1==sum2)
            {
                f=1;
                break;
            }
            else if(sum2>sum1)
            {
                f=0;
                break;
            }
             i++;
        }

       // if(t==1)cout<<sum<<endl<<x<<endl;

        if( y==1|| f==0)cout<<"NO"<<"\n";
        else if(f==1)cout<<"YES"<<"\n";
        //else if(f==0)cout<<"NO"<<"\n";

        //sort(b,b+m);

        //ll sum=(b[m]*(b[m]+1))/2;
        //ll x=sum-b_sum;



    }


    return 0;
}
*/

/* if(x==s)cout<<"YES"<<"\n";
        else
        {
            if(s<x)cout<<"NO"<<"\n";
            else if(s>x)cout<<"YES"<<"\n";
            //{
                //s-=x;
                //for(i=b[m]+1;x<=s;i++)
                //{
                    //x+=i;
                //}
            //}
        }*/
