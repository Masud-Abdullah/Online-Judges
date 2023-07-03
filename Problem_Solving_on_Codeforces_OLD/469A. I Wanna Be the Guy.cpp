#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,i,j,flag=0,maxx;
    cin>>n;
    cin>>p;
    int a[p];

    for(i=0;i<p;i++)
    {
        cin>>a[i];
    }
    cin>>q;
    int b[q];
    for(i=0;i<q;i++)
    {
        cin>>b[i];
    }
    if(p>q)maxx=p;
    else maxx=q;

    for(i=1;i<=n;i++)
    {
        for(j=0;j<maxx;j++)
        {
            if(a[j]==i || b[j]==i)
            {
                flag++;
                break;
            }
        }
    }
    //cout<<maxx<<flag<<endl;
   if(flag==n)cout<<"I become the guy."<<endl;
   else cout<<"Oh, my keyboard!"<<endl;


    return 0;
}
