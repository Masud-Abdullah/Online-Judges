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
        ll n;
        cin>>n;

        while(1)
        {
            if(n%2020==0 || n%2021==0)
            {
                cout<<"YES"<<nl;
                break;
            }
            else
            {
                n-=2021;
                if(n<0)
                {
                    cout<<"NO"<<nl;
                    break;
                }
                else if(n%2020==0 || n==0)
                {
                    cout<<"YES"<<nl;
                    break;
                }
            }
        }
    }

    return 0;
}


