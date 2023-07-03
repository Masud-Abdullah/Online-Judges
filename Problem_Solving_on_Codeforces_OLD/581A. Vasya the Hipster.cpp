#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,minn,maxx,ans;
    cin>>a>>b;

    minn=min({a,b});
    maxx=max({a,b});

   ans= (maxx-minn)/2;

   cout<<minn<<" "<<ans<<endl;

    return 0;
}
