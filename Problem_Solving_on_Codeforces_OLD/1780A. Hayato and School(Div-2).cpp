#include<bits/stdc++.h>
using namespace std;
int main()                //******Failed******
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int a[n],i,x,y,z,f=0,even=0,odd=0,m,d,o,p,q,r,f2=0;
        for(i=0; i<n; i++)cin>>a[i];

        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)even++;
            else if(a[i]%2!=0)
            {
                odd++;
                if(f2==0)
                {
                    p=i+1;
                    f2=1;
                }
                else if(f2==1)
                {
                    q=i+1;
                    f2=2;
                }
                else if(f2=3)
                {
                    r=i+1;
                }

            }
        }

        if(even>=2)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2==0)
                {
                    if(f==0)
                    {
                        //x=a[i];
                        //p=a[i];
                        r=i+1;
                        m=i+1;
                        f=1;
                    }
                    else if(f==1)
                    {
                        //y=a[i];
                        d=i+1;
                        f=-1;
                    }
                }
            }
        }
        /*else if(odd>=2)
        {
            for(i=0; i<n; i++)
            {
                if(a[i]%2!=0)
                {
                    if(f==0)
                    {
                       // x=a[i];
                        r=i+1;
                        m=i+1;
                        f=1;
                    }
                    else if(f==1)
                    {
                        //y=a[i];
                        d=i+1;
                        f=-1;
                    }
                }
            }
        }*/

       /* if(f==-1)
        {
            if(even>=2)
            {
                cout<<"YES"<<endl<<m<<" "<<d<<" "<<r<<endl;
            }else if(odd>=2)cout<<"YES"<<endl<<m<<" "<<d<<" "<<r<<endl;
            //else cout<<"NO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }*/

        if(odd>=3)cout<<"YES"<<endl<<p<<" "<<q<<" "<<r<<endl;
        else if(even>=2)cout<<"YES"<<endl<<m<<" "<<d<<" "<<r<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],i,odd=0,x,y,z,f=0,j,k;
        for(i=0;i<n;i++)cin>>a[i];


        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(i==k || i==j || j==k || i==j==k)continue;
                    else
                    {
                        int m=0;
                        m=a[i]+a[j]+a[k];
                        if(m%2!=0)
                        {
                            x=i+1;
                            y=j+1;
                            z=k+1;
                            f=1;
                            odd=-1;
                        }
                    }
                }
                if(f==1)break;
            }
            if(f==1)break;
        }




        if(odd==-1)cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
        else cout<<"NO"<<endl;
        }

return 0;

    }
*/
/*for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)odd++;

            if(f==0 && a[i]%2!=0)
            {
                f++;
                x=a[i];
            }

            if(f==1 && a[i]%2!=0)
            {
                f++;
                y=a[i];
            }

            if(f==2 && a[i]%2!=0)
            {
                f++;
                z=a[i];
            }
        }*/
