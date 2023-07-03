#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long test;
    cin>>test;
    while(test--)
    {
        long long k,j,i,flag=0;
        cin>>k;
        long long x=k-1;

        for(j=x;j>=1;j--)
        {
            long long fact1=0,fact2=0;
            for(i=1; i<=x; i++)
            {
                fact1=fact1*i;
            }
            for(i=1; i<=x-1; i++)
            {
                fact2=fact2*i;
            }
            if((fact1+fact2)%k==0)
            {
                flag=1;
                break;
            }
        }

            if(flag==1)cout<<x<<endl;
            else cout<<"-1"<<endl;

        }

        return 0;
    }
