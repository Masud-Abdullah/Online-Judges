#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        if(sum%2==0)
        {
            cout<<0<<endl;
            continue;
        }

        for(int i=0;i<n;i++)
        {
            int f;
            if(a[i]%2==0)f=1;
            else f=0;
            int cnt=0;
            while(1)
            {
                a[i]/=2;
                cnt++;
                if(f==1 && a[i]%2!=0)
                {
                    b[i]=cnt;
                    break;
                }
                else if(f==0 && a[i]%2==0) 
                {
                    b[i]=cnt;
                    break;
                }
            }
        }
        sort(b,b+n);
        cout<<b[0]<<endl;


    }
    return 0;
}