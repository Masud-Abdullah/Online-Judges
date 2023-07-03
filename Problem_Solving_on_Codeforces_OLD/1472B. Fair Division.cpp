#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,one=0,two=0,sum=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]==1)one++;
            else two++;
            sum+=arr[i];
        }

        if(sum%2==0)
        {
            if(two%2==0)cout<<"YES"<<endl;
            else
            {
                if(one>0)cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
