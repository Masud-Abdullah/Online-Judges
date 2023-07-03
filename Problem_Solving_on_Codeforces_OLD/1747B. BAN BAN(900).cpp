#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,i,j,a=2,b=6;
        cin>>n;

        if(n==1)
        {
            cout<<"1"<<endl;
            cout<<"1"<<" "<<"2"<<endl;
        }
        else
        {
            if(n%2==0)
            {
                cout<<n/2<<endl;

                for(i=2,j=3*n; i<=n/2; i=i+3,j=j-3)
                {
                    cout<<i<<" "<<j<<" ";
                }
                cout<<endl;
            }
            else if(n%2!=0)
            {
                cout<<(n/2)+1<<endl;

                for(i=2,j=3*n; i<=(n/2)-2; i=i+3,j=j-3)
                {
                    cout<<i<<" "<<j<<" ";

                }
                cout<<i+3<<" "<<j-3;
                cout<<endl;
            }

        }

    }

    return 0;
}
