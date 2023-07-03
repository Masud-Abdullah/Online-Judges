#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,k,steps=0,temp;
        cin>>n>>k;

        while(n!=0)
        {
            if(n%k==0)
            {
                n=n/k;
                steps++;
            }
            else
            {
                /*n--;
                steps++;*/
                temp=n%k;
                steps=steps+temp;
                n=n-temp;
            }
        }
        cout<<steps<<endl;
    }

    return 0;
}
