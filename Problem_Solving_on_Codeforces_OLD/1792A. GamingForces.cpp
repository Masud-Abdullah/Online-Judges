#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,cnt=0;
        cin>>n;
        int h[n],i;
        for(i=0;i<n;i++)cin>>h[i];

        for(i=0;i<n;i++)
        {
            if(h[i]==1)cnt++;
        }

        if(cnt>1)cout<<n-(cnt/2)<<endl;
        else cout<<n<<endl;
    }

    return 0;
}
