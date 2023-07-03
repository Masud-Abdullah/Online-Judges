#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,cnt=0;
        string s1,s2;
        s1="314159265358979323846264338327";
        cin>>s2;

        for(i=0;i<s1.size();i++)
        {
            if(s2[i]==s1[i])cnt++;
            else break;
        }
        cout<<cnt<<endl;

    }

    return 0;
}
