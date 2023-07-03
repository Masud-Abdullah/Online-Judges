#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;

        int a[n],sum=0,f=0;

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0; i<n; i++)
        {
            sum+=a[i];
        }


        for(i=0; i<n-1; i++)
        {
            if(a[i]==-1 && a[i+1]==-1)
            {
                f=-1;
                break;
            }
        }

        if(f==0)
        {
            for(i=0; i<n-1; i++)
            {
                if((a[i]==-1 && a[i+1]==1) || (a[i]==1 && a[i+1]==-1) )
                {
                    f=1;
                    break;
                }
            }
        }


        if(f==-1)sum+=4;
        else if(f==0)sum-=4;


        cout<<sum<<endl;



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
        int n,i;
        cin>>n;
        int a[n],sum=0,f=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(i=0;i<n;i++)
        {
            sum+=a[i];
        }


        for(i=0;i<n-1;i++)
        {
            if(a[i]==-1 && a[i+1]==-1)
            {
                //a[i]*=(-1);
                //a[i+1]*=(-1);
                f=-1;
                break;
            }
        }

        if(f==0)
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]==1 && a[i+1]==1)
            {
                f=1;
                break;
            }
            }
        }



/*
        if(f==0)
        {
            for(i=0;i<n-1;i++)
        {
            if(a[i]==1 && a[i+1]==1)
            {
                a[i]*=(-1);
                a[i+1]*=(-1);
                break;
            }
        }

        }

*/


        if(f==-1)sum+=4;
        else if(f==1)sum-=4;

        cout<<sum<<endl;



    }

    return 0;
}

*/
















/*#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n],sum=0;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }


        sort(a,a+n);

        a[0]*=(-1);
        a[1]*=(-1);

        for(i=0; i<n; i++)
        {
            sum+=a[i];
        }

        cout<<sum<<endl;




    }

    return 0;
}
*/
















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
        int a[n],p=0,m=0,i,sum=0,x,y,z,ans;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)p++;
            else m++;
            sum+=a[i];
        }

        if(p==0)
        {
            ans=(m*(-1))+2;
            cout<<ans<<endl;
        }
        else if(m==0 && p>=2)
        {
            ans=(p*1)-4;
            cout<<ans<<endl;
        }
        else if(p==2 && m==0)
        {
            ans=p*(-1);
            cout<<ans<<endl;
        }
        else if(p==1 && m==1)
        {
            ans=0;
            cout<<ans<<endl;
        }
        else if(p==0 && m>2)
        {
            ans=(m*(-1))+2;
            cout<<ans<<endl;
        }
        else
            {
                x=max((sum-4),(sum+4));
                y=max((sum+4),sum);

                cout<<max(x,y)<<endl;
            }




    }

    return 0;
}

*/
/*if(p==0)ans=(m*(-1))+2;
        else if(m==0 && p>=2)ans=(p*1)-2;
        else if(p==2 && m==0)ans=p*(-1);
        else if(p==0 && m==0)ans=
        else if(p==1 && m==1)ans=0;
        else if(p==0 && m>2)ans=(m*(-1))+2;
        else
        {
            if(m==p)ans=p+2+((m-2)*(-1));

        }*/
/*if(p>m && m>=2)ans=(p+2)*1+((m-2)*-1));
        else if(p>m && m<2)
        {
            if(m==1)ans=p*1+(m*(-1));
            else ans=p*1+((m+2)*(-1));
        }
        else if(p==m)
        {
            if(m>=2)
        }*/
