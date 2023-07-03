#include<bits/stdc++.h>
using namespace std;
int main()
{
    long i;
    string x,y;
    cin>>x>>y;
    for(i=0;i<x.size();i++)
    {
        if(x[i]==y[i])y[i]='0';
        else if(x[i]!=y[i])y[i]='1';
    }
    cout<<y;

    return 0;
}
