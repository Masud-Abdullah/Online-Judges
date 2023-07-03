#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll n,i,count=0;
    cin>>n;
    string s;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(s=="Tetrahedron")count+=4;
        else if(s=="Cube")count+=6;
        else if(s=="Octahedron")count+=8;
        else if(s=="Dodecahedron")count+=12;
        else if(s=="Icosahedron")count+=20;
    }
    cout<<count<<endl;


    return 0;
}

