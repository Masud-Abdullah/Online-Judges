#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        int dog,cat;

        if(a>=x && b>=y)cout<<"YES"<<endl;
        else if((a<=x && b>=y)&& abs(x-a)<=c)cout<<"YES"<<endl;
        else if((a>=x && b<=y) && abs(y-b)<=c)cout<<"YES"<<endl;
        else if((a<x && b<y) && (abs(x-a)+abs(y-b))<=c)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }

    return 0;
}
