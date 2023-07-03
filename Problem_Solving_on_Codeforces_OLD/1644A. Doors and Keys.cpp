#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int r=0,g=0,b=0,open=0;
        char str[10];
        cin>>str;
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]=='r')r++;
            else if(str[i]=='g')g++;
            else if(str[i]=='b')b++;

            if(str[i]=='R' && r==1 )open++;
            else if(str[i]=='G' && g==1 )open++;
            else if(str[i]=='B' && b==1 )open++;
        }
        if(open==3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
