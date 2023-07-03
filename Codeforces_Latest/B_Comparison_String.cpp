#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,bnt=INT_MIN;
        cin>>n;
        string s;
        cin>>s;
        char ch;
        ch=s[0];

        for(int i=0;i<n;i++)
        {
           if(s[i]==ch)
           {
            cnt++;
           }
           else
           {
            ch=s[i];
            bnt=max(cnt,bnt);
            cnt=1;
           }
        }
        bnt=max(cnt,bnt);

        cout<<bnt+1<<endl;

    }
    return 0;
}