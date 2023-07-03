#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;

    if((n%4==0)||(n%7==0)||(n%44==0)||(n%47==0)||(n%74==0)||(n%77==0)||(n%444==0)||(n%777==0)||(n%447==0)||(n%474==0)||(n%744==0)||(n%774==0)||(n%747==0)||(n%477==0))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}












/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;

    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        {
            n/=10;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;


    return 0;
}
*/










/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;

    while(n!=0)
    {
        if(n%10==4 || n%10==7)
        {
            n/=10;
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0 || n%4==0 || n%7==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
/*
