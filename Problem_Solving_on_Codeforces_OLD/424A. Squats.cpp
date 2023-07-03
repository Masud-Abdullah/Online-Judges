#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,i,countt=0,mount=0,change=0;
    cin>>n;
    string str;
    cin>>str;

    for(i=0;i<n;i++)
    {
        if(str[i]=='X')countt++;
        else if(str[i]=='x')mount++;
    }


    //cout<<countt<<" "<<mount<<endl;

    if(countt==n/2 && mount==n/2)
    {
        cout<<"0"<<endl;
        cout<<str<<endl;
    }
    else if(countt>n/2)
    {

        for(i=0;countt!=n/2;i++)
        {
            if(str[i]=='X')
            {
                str[i]='x';
                countt--;
                mount++;
                change++;
            }
        }
        cout<<change<<endl;
        cout<<str<<endl;
    }
    else if(mount>n/2)
    {

        for(i=0;mount!=n/2;i++)
        {
            if(str[i]=='x')
            {
                str[i]='X';
                mount--;
                countt++;
                change++;
            }
        }
        cout<<change<<endl;
        cout<<str<<endl;
    }

       return 0;
}






/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,countt=0;
    cin>>n;
    char str[n];
    cin>>str;

    for(i=0,j=i+1;str[i]!='\0',str[j]!='\0';i=i+2,j=j+2)
    {
        if((str[i]=='X' &&str[j]=='X')||(str[i]=='x' &&str[j]=='x'))
        {
            str[i]='X';
            str[j]='x';
            countt++;
        }
    }
    cout<<countt<<endl<<str<<endl;
    return 0;
}
*/
