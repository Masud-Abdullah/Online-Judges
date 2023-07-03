#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long n,i,j;
        cin>>n;
        long a[n*n],b[n][n];
        for(i=1;i<=n*n;i++)
        {
            a[i]=i;
           // b[i]=i;
        }
        //reverse(b,b+n);
        long one=1,two=n*n,f=0;

        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                for(j=n;j>=1;j--)
            {
                if(f==0)
                {
                    b[i][j]=a[one];
                    one++;
                    f=1;
                }else{
                    b[i][j]=a[two];
                    two--;
                    f=0;
                }
            }
            }
            else
            {
                for(j=1;j<=n;j++)
            {
                if(f==0)
                {
                    b[i][j]=a[one];
                    one++;
                    f=1;
                }else{
                    b[i][j]=a[two];
                    two--;
                    f=0;
                }
            }
            }
        }




        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}

