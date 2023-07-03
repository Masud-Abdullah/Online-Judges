#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n,i;
        cin>>n;
        char str[n];
        cin>>str;

        int L=-1,R=-1;
        for(i=0;i<n;i++)
        {
            if(str[i]=='L')L=i;
            else if(str[i]=='R' && R==-1)R=i;
        }
        if(L==-1 || R==-1)cout<<-1<<endl;
        else if(R<L)cout<<0<<endl;
        else cout<<L+1<<endl;




    }

    return 0;
}
