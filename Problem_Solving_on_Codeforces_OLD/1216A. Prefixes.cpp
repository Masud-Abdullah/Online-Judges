#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,cnt=0;
    cin>>n;
    char s[n+1];
    for(i=1; i<=n; i++)
    {
        cin>>s[i];
    }
    s[i+1]='\0';


    for(i=1; i<=n/2; i++)
    {
        if(s[2*i-1]=='a' && s[2*i]=='a')
        {
            s[2*i]='b';
            cnt++;
        }
        else if(s[2*i-1]=='b' && s[2*i]=='b')
        {
            s[2*i-1]='a';
            cnt++;
        }
    }
    cout<<cnt<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<s[i];
    }
    cout<<endl;

    return 0;
}
/*for(i=0;i<s.size();i++)
    {
        if(s[i]=='a')a++;
        else b++;
    }

    if(a==b)
    {
        cout<<"0"<<endl<<s<<endl;
    }
    else
    {
        //cout<<(a+b)/2<<endl;
        cout<<abs(a-b)/2<<endl;
        for(i=0;i<s.size();i=i+2)
        {
            if(s[i]=='a' && s[i+1]=='a')cout<<"ab";
            else if(s[i]=='b'&& s[i+1]=='b')cout<<"ab";
            else if(s[i]=='a' && s[i+1]=='b')cout<<"ab";
            else if(s[i]=='b' && s[i+1]=='a')cout<<"ba";


            //if(i%2==0)cout<<"a";
            //else cout<<"b";
        }
    }*/
