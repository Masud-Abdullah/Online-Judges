#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,o,p,i,sum=0;

    cin>>m>>n>>o>>p;

    string str;
    cin>>str;

    for(i=0;str[i]!='\0';i++)
    {
        str[i]-=48;
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==1)
        {
            sum+=m;
        }
        else if(str[i]==2)
        {
            sum+=n;
        }
        else if(str[i]==3)
        {
            sum+=o;
        }
        else if(str[i]==4)
        {
            sum+=p;
        }
    }
    cout<<sum<<endl;


    return 0;
}
