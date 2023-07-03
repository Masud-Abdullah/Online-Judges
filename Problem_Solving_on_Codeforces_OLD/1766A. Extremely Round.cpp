#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n<10)cout<<n<<endl;
        else
        {
            int ans=9;
            int num=10;
            for(int i=1;i<=5;i++)
            {
                ans+=min(9,n/num);
                num*=10;
            }
            cout<<ans<<endl;
        }
    }

    return 0;
}











/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n<10)cout<<n<<endl;
        else if(n<100)
        {
            n/=10;
            cout<<n+9<<endl;
        }
        else if(n<1000)
        {
            n/=100;
            cout<<n+18<<endl;
        }
        else if(n<10000)
        {
            n/=1000;
            cout<<n+27<<endl;
        }
        else if(n<100000)
        {
            n/=10000;
            cout<<n+36<<endl;
        }
        else if(n<1000000)
        {
            n/=100000;
            cout<<n+45<<endl;
        }
        else
        {
            n/=1000000;
            cout<<n+54<<endl;
        }

    }

    return 0;
}
*/
