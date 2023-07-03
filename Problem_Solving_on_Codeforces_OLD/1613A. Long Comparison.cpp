#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    fio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x1,p1,x2,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;

        while(x1>1 && x2>1)
        {
            x1/=10;
            x2/=10;
        }
        p1-= min(p1,p2);
        p2-= min(p1,p2);

        ll ans1=x1*pow(10,p1);
        ll ans2=x2*pow(10,p2);

        if(ans1==ans2)cout<<"="<<nl;
        else if(ans1>ans2)cout<<">"<<nl;
        else if(ans1<ans2)cout<<"<"<<nl;

    }

    return 0;
}


/*ll x1,p1,x2,p2;
        cin>>x1>>p1;
        cin>>x2>>p2;

        ll cnt1=0,cnt2=0;
        ll a=x1,b=x2;

        while(x1!=0)
        {
            cnt1++;
            x1/=10;
        }
        while(x2!=0)
        {
            cnt2++;
            x2/=10;
        }

        if(a==b)
        {
            if(p1>p2)cout<<">"<<nl;
            else if(p1<p2)cout<<"<"<<nl;
            else cout<<"="<<nl;
        }
        else if(cnt1==cnt2)
        {
            if(p1>p2)cout<<">"<<nl;
            else if(p1<p2)cout<<"<"<<nl;
            else
            {
                if(a==b)cout<<"="<<nl;
                else if(a>b)cout<<">"<<nl;
                else cout<<"<"<<nl;
            }
        }
        else
        {
            if(cnt1+p1<cnt2+p2)cout<<"<"<<nl;
            else if(cnt1+p1>cnt2+p2)cout<<">"<<nl;
            else if(cnt1+p1==cnt2+p2)
            {
                    if(pow(a,min(p1,p2))<pow(b,min(p1,p2)))cout<<"<"<<nl;
                    else if(pow(a,min(p1,p2))>pow(b,min(p1,p2)))cout<<">"<<nl;
                    else if(pow(a,min(p1,p2))==pow(b,min(p1,p2)))cout<<"="<<nl;
            }
        }
        //cout<<cnt1<<nl<<cnt2<<nl;*/
/*string x1,x2;
        ll p1,p2,i;
        cin>>x1;
        cin>>p1;
        cin>>x2;
        cin>>p2;

        ll m=x1.size(),n=x2.size();

        ll a[m],b[n];

        a[0]=1,b[0]=1;
        for(i=1;i<m;i++)
        {
            a[i]=a[i-1]*10;
        }
        for(i=1;i<n;i++)
        {
            b[i]=b[i-1]*10;
        }

        //reverse(a+1,a+x1.size()+1);
        //reverse(b+1,b+x2.size()+1);

        ll num1=0,num2=0;

        for(i=m-1;i>=0;i--)
        {
            num1+=(x1[i]-48)*a[i];
        }
         for(i=n-1;i>=0;i--)
        {
            num2+=(x2[i]-48)*b[i];
        }

        //cout<<num1<<" "<<num2<<nl;

        for(i=1;i<m;i++)
        {
            cout<<a[i]<<" ";
        }

        for(i=1;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
*/

/*ll a=x1*pow(10,p1);
        ll b=x2*pow(10,p2);

        if(a==b)cout<<"="<<nl;
        else if(a>b)cout<<">"<<nl;
        else if(a<b)cout<<"<"<<nl;*/
