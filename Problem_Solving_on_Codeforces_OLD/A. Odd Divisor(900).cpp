#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==2)
        {
            cout<<"NO\n";
        }
        else if(n%2!=0) cout<<"YES\n";
        else
        {
            while(n)
            {
                if(n%2==0) n/=2;
                else break;
            }
            if(n%2!=0 && n!=1) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }


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
        ll n,i,f=0;
        cin>>n;

        if(n<3)cout<<"NO"<<endl;
        else if(n%2!=0)cout<<"YES"<<endl;
        else if(n%2==0)
        {
            for(i=3; i<=sqrt(n); i+=2)
            {
                if(i%2!=0 && n%i==0)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }

    return 0;
}

*/
