#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,f1=0;
        cin>>n;
        string a;
        cin>>a;

        for(i=0;i<a.size()-1;i++)
        {
            if((a[i]=='1' && a[i+1]=='0')||(a[i]=='0' && a[i+1]=='1') && f1==0)
            {
                cout<<"+";
                f1=1;
            }
            else if((a[i]=='1' && a[i+1]=='0')||(a[i]=='0' && a[i+1]=='1') && f1==1)
            {
                cout<<"-";
                f1=0;
            }
            else if(a[i]=='1' && a[i+1]=='1')cout<<"-";
            else cout<<"-";
        }
        cout<<endl;



    }

    return 0;
}

