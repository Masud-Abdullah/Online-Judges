#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h,n,cnt=1;
        cin>>w>>h>>n;

        while(w%2==0)
        {
            w/=2;
            cnt*=2;
        }
        while(h%2==0)
        {
            h/=2;
            cnt*=2;
        }

        if(cnt>=n)cout<<"YES"<<endl;
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
        int w,h,n,i,cnt=1;
        cin>>w>>h>>n;

        if(w%2!=0 && h%2!=0)
        {
            if(n==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(w%2==0 && h%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                if(w%2==0 && h%2==0)
                {
                    w/=2;
                    cnt++;
                }
                else if(w%2==0 && h%2!=0)
                {
                    w/=2;
                    cnt++;
                }
                else if(w%2!=0 && h%2==0)
                {
                    h/=2;
                    cnt++;
                }
                else if(w%2!=0 && h%2!=0)
                {
                    break;
                }
            }
            if(cnt==n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
        else if(w%2==0 && h%2!=0)
        {
            for(int i=1; i<=n; i++)
            {
                if(w%2==0 && h%2!=0)
                {
                    w/=2;
                    cnt*=2;
                }
                else if(w%2!=0 && h%2!=0)
                {
                    break;
                }
            }
            if(cnt==n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
        else if(w%2!=0 && h%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                if(w%2!=0 && h%2==0)
                {
                    h/=2;
                    cnt*=2;
                }
                else if(w%2!=0 && h%2!=0)
                {
                    break;
                }
            }
            if(cnt==n)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    }

    return 0;
}*/

//if(cnt==n)cout<<"YES"<<endl;
//else cout<<"NO"<<endl;
