#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m,i,j,u=1;
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i%2!=0)
            {
                cout<<"#";
            }
            else if(i%2==0)
            {
                if(u%2!=0 && j==m)
                {
                    cout<<"#";
                }
                else if(u%2==0 && j==1)
                {
                    cout<<"#";
                }
                else cout<<".";
            }

        }
        if(i%2==0)u++;
        cout<<endl;
    }

    return 0;
}
/*else if(i%2==0 && j==1 && u%2==0)
            {
                cout<<"#";
                u+=2;
            }*/
