#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll a,b,c,d;
        ll ans1=0,ans2=0;
        cin >> a >> b >> c >> d;

        ans1 = a*d;
        ans2 = b*c;
        ll mx = max(ans1,ans2);
        ll mn = min(ans1,ans2);

        if(ans1==ans2) cout << 0 << endl;
        else if(ans1 ==0 || ans2==0) cout << 1 << endl;
        else if(mx%mn==0) cout << 1 << endl;
        else cout << 2 << endl;

    }

    return 0;
}
