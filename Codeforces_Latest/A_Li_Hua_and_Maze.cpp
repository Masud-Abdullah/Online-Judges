#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        int mv1=0,mv2=0;

        if(x1-1>0)mv1++;
        if(x1+1<=n)mv1++;
        if(y1-1>0)mv1++;
        if(y1+1<=m)mv1++;

        if(x2-1>0)mv2++;
        if(x2+1<=n)mv2++;
        if(y2-1>0)mv2++;
        if(y2+1<=m)mv2++;

        cout<<min(mv1,mv2)<<endl;
    }
    return 0;
}