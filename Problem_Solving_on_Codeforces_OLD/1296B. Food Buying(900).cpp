#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long s,spend=0,cnt=0;;
        cin>>s;

        if(s<10)cout<<s<<endl;
        else{
            if(s%9==0)cout<<s/9+(s-1)<<endl;
            else cout<<(s/9)+s<<endl;
        }


    }

    return 0;
}
/*if(s<10)
        {
            cout<<s<<endl;
        }
        else
        {
            while(1)
            {
                cnt++;
                    spend+=10;
                    s=(s-10)+1;
                    if(s<10)
                    {
                         cout<<spend+s<<endl;
                         cout<<"cnt: "<<cnt<<endl;
                         break;
                    }
            }

        }*/

