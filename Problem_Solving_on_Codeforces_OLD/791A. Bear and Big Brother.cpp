#include<iostream>
using namespace std;
int main()
{
    int a,b,ans=0;
    cin>>a>>b;

    while(1)
    {
        a=a*3;
        b=b*2;
        if(a<=b)ans++;
        else if(a>b)
        {
            ans=ans+1;
            break;
        }
    }
    cout<<ans<<endl;


    return 0;
}
