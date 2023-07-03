#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,cnt=0;
        cin>>n;
        string s;
        cin>>s;

        int len=s.size();

        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(s[i]==s[j])break;
            else cnt++;
        }

        cout<<len-(cnt*2)<<endl;


    }
    return 0;
}


/* if(len==1)cout<<len<<endl;
        else if(n%2!=0)
        {
            if((s[0]==1 && s[len-1]==0)||(s[0]==0 && s[len-1]==1))
            {
                cout<<len-2<<endl;
            }
            else if((s[0]==1 && s[len-1]==1)||(s[0]==0 && s[len-1]==0))
            {
                cout<<len<<endl;
            }
        }
        else if(n%2==0)
        {
            if((s[0]==1 && s[len-1]==1)||(s[0]==0 && s[len-1]==0))
            {
                cout<<len<<endl;
            }
        }*/










