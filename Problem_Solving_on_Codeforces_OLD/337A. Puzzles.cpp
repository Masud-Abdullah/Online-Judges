#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int f[m];
    for(i=0;i<m;i++)cin>>f[i];

    sort(f,f+m);
    //for(i=0;i<m;i++)cout<<f[i]<<" ";

    long long diff=1e9;

    for(i=0;i+n-1<m;i++)
    {
        int x=abs(f[i+n-1]-f[i]);
        if(x<diff)
        {
            diff=x;
        }
    }

    cout<<diff<<endl;

    return 0;
}













/*#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n,m,i,j;
    cin>>n>>m;
    ll f[m];
    for(i=0;i<m;i++)cin>>f[i];

    //sort(f,f+n);
    //cout<<(f[n-1]-f[0])<<endl;

    ll diff=100000000;


if(n==m)
{
    for(i=0;i<=m-n;i++)
    {
        if(abs(f[i+(n-1)]-f[i]) <diff)
        {
            diff=abs(f[i+n-1]-f[i]);
        }
    }
}
else if(n!=m)
{
    for(i=0;i<m-n;i++)
    {
        if(abs(f[i+n]-f[i]) <diff)
        {
            diff=abs(f[i+n]-f[i]);
        }
    }
}


    cout<<diff<<endl;
/*for(j=i;j<i+n;j++)
        {

        }*/

   // return 0;
//}


