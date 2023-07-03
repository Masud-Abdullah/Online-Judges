//Link: https://lightoj.com/problem/opposite-task

#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        if(n>10)cout<<10<<" "<<n-10<<"\n";
        else cout<<n<<" "<<0<<"\n";
    }


    return 0;
}


