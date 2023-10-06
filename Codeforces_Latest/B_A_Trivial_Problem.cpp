#include<bits/stdc++.h>
using namespace std;
bool ans[100005];
int main()
{
    long long int n,cnt=-1,i,j=3;
    cin>>n;
    for(i=1;i<=n;i*=5)
    {
        j++;
    }
    cout<<j<<'\n';
    return 0;
}