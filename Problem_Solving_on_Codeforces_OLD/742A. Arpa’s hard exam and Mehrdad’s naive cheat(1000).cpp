#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll base=1378,ans=1;

    while(n)
    {
        if(n%2==0)
        {
            base = (base*base)%10;
            n = n/2;
        }
        else
        {
            ans = (ans*base)%10;
            n--;
        }

    }

    cout << ans<< endl;

    return 0;
}
