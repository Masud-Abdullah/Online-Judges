#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int cnt=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]!=a[i-1])cnt++;
        }

        int xt=n-cnt;
        if(xt%2)cout<<cnt-1<<endl;
        else cout<<cnt<<endl;
    }
    return 0;
}



// 1 9 1 9 9
// n=5, cnt=2, xt=3;