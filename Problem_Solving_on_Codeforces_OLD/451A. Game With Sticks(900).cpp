#include<bits/stdc++.h>
using namespace std;
int main()
{


    int a,b;
    cin>>a>>b;
    int minimun=min(a,b);

    if(minimun%2==0)cout<<"Malvika"<<endl;
    else cout<<"Akshat"<<endl;

    return 0;
}

















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a=0,M=0,i,f;
    cin>>n>>m;

    int val;
    for(i=1;i<=min(n,m);i++)
    {
        val=n*m;
        val-=(m+n-1);
        n-=1;
        m-=1;
        if(i%2!=0)
        {
            a++;
            f=1;
        }
        else
        {
            M++;
            f=0;
        }

    }
    if(f==1)cout<<"Malvika"<<endl;
    else if(f==0)cout<<"Akshat"<<endl;


    return 0;
}*/
/*if((n*m)%2==0  && (n+m-1)%2==0 &&((n*m)%(n+m-1)==0))cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;*/
