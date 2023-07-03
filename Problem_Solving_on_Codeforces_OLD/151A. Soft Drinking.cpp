#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drinks=k*l;
    int toasts=drinks/nl;
    int lime=c*d;
    int salt=p/np;
    int minn= min({toasts,lime,salt});
    //cout<<minn<<endl;
    int ans= minn/n;

    cout<<ans<<endl;

    return 0;
}
