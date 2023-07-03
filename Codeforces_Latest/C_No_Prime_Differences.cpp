#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,val=0;
        cin>>n>>m;
        int a[n+1][m+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                val++;
                a[i][j]=val;
            }
        }

        for(int i=2;i<=n;i+=2)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=1;i<=n;i+=2)
        {
            for(int j=1;j<=m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}