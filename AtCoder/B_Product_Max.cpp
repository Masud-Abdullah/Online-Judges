#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long ans1=a*c;
    long long ans2=a*d;
    long long  ans3=b*c;
    long long ans4=b*d;
    cout<<max({ans1,ans2,ans3,ans4})<<endl;
    return 0;
}