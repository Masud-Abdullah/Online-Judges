#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,d;
    cin>>n>>s>>d;
    bool f=false;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(x<s && y>d)
        {
            f=true;
        }
    }

    if(f)cout<<"Yes\n";
    else cout<<"No\n";
    return 0;
}