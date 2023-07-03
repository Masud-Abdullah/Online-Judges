#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],i,minn,maxx;
    for(i=0;i<n;i++)cin>>x[i];

    for(i=0;i<n;i++)
    {
        if(i==0)cout<<abs(x[i]-x[i+1])<<" ";
        else if(i==n-1)cout<<abs(x[i]-x[i-1])<<" ";
        else cout<<min(abs(x[i]-x[i+1]),abs(x[i]-x[i-1]))<<" ";

        cout<<max(abs(x[i]-x[0]),abs(x[i]-x[n-1]))<<endl;
    }



    return 0;
}











/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],i,j,y[n],z[n];
    for(i=0;i<n;i++)cin>>x[i];

    for(i=0;i<n;i++)
    {
        int maxx=0,minn=1e18;
        for(j=0;j<n;j++)
        {
            //if(i==j)continue;
            if(i!=j)
            {
                if(abs(x[i]-x[j])>maxx)maxx=abs(x[i]-x[j]);

                if(abs(x[i]-x[j])<minn)minn=abs(x[i]-x[j]);
            }
        }
            y[i]=minn;
            z[i]=maxx;
    }
    for(i=0;i<n;i++)
    {
        cout<<y[i]<<" "<<z[i]<<endl;
    }

    return 0;
}
*/
