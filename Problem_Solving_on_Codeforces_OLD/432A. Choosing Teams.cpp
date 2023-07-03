#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt;
    cin>>n>>k;
    int y[n];

    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }

    for(int i=0;i<n;i++)
    {
        if(5-y[i]>=k)cnt++;
    }

    cout<<cnt/3<<endl;

    return 0;
}

