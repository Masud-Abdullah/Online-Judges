#include<bits/stdc++.h>
using namespace std;
int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        string a;
        cin>>a;
        long i;
        for(i=0;i<2;i++)cout<<a[i];
        for(i=3;i<a.size();i=i+2)
        {
            cout<<a[i];
        }
        cout<<endl;
    }


    return 0;
}
