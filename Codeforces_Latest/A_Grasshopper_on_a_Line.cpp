#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> x >> k;

        //if(x%2!=0 && k%2==0)(x%n==0)
        if(x%k!=0)
        {
            cout<<1<<endl;
            cout<<x<<endl;
        }
        if(x%k==0)
        {
            cout<<2<<endl;
            cout<<1<<" "<<x-1<<endl;
        }
    }

    return 0;
}