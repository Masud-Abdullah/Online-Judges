#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ext,ent,sum=0,maxx=0;

    while(n--)
    {
        cin>>ext>>ent;
        sum= (sum-ext)+ent;

        if(sum>maxx)maxx=sum;
    }
    cout<<maxx<<endl;

    return 0;
}
