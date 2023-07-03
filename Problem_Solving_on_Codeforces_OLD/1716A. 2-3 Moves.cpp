#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,moves,i;
        cin>>n;
        if(n%3==0)moves=n/3;
        else if(n==1)moves=2;
        else if(n%3!=0)
        {
            moves=(n/3)+1;
        }
        cout<<moves<<endl;
    }

    return 0;
}
