#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int i,flag1=0,flag2=0;

    if(str[0]>='a' && str[0]<='z')flag1=1;
    for(i=1; i<str.size(); i++)
    {
        if(str[i]>='a' && str[i]<='z')flag2++;
    }

    if(flag1==1 && flag2==0)
    {
        str[0]-=32;
        for(i=1; i<str.size(); i++)
        {
            if(str[i]>='A' && str[i]<='Z')
            {
                str[i]+=32;
            }
        }
        cout<<str<<endl;
    }
    else if(flag1==0 && flag2==0)
    {
        for(i=0; i<str.size(); i++)
        {
            str[i]+=32;
        }
        cout<<str<<endl;
    }
    else cout<<str<<endl;


    return 0;
}
