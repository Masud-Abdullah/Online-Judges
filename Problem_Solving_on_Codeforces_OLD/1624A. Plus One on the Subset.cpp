#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,cnt=0;
        cin>>n;
        int a[n];
        for(i=0; i<n; i++)cin>>a[i];

        int max_index,min_index;
        max_index = max_element(a, a + n)-a;
        min_index= min_element(a,a+n)-a;


        cout<<a[max_index]-a[min_index]<<endl;


    }


    return 0;
}

