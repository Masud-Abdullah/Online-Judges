#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,cnt=0,maxx=0,x,y;
    cin>>n;
    char s[n+1];

    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    s[n]='\0';

    for(i=0;i<n-3;i++)
    {
        cnt=0;
        if(s[i]=='A')cnt++;

        if(s[i+1]=='C')cnt++;

        if(s[i+2]=='T')cnt++;

        if(s[i+3]=='G')cnt++;

        if(cnt>maxx)
        {
            maxx=cnt;
            x=i;
            y=i+3;
        }

    }

    for(i=x;i<=y;i++){
        int op=0;

        if(s[x]!='A')op=op+(s[i]-65);

        if(s[x+1]!='C')op+=s[i]-65;

        if(s[x+2]!='T')op+=s[i]-65;

        if(s[x+3]!='G')op+=s[i]-65;

        cout<<op<<endl;

        break;
    }




    //cout<<maxx<<endl<<x<<endl;

   // cout<<maxx<<endl;


    return 0;
}
