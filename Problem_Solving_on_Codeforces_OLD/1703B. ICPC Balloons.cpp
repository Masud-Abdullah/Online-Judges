#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,baloon=2;
        cin>>n;
        string str;
        cin>>str;

        sort(str.begin(),str.end());
        for(i=1;i<str.size();i++)
        {
            if(str[i]!=str[i-1])baloon+=2;
            else baloon++;
        }
        cout<<baloon<<endl;
    }

    return 0;
}
