#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,alice=0,bob=0,f1=0,f2=1;
        cin>>n;

        n-=1;
        alice+=1;

        for(i=2; n>0; i=i+2)
        {
            if((n-i)<0 || (n-(i+(i+1)))<0)
            {
                if(f1==0)
                {
                    bob+=n;
                    break;
                }
                else if(f2==0)
                {
                    alice+=n;
                    break;
                }
            }


            if(f1==0)
            {
                bob+=(i+(i+1));
                n-=(i+(i+1));
                f1=1;
                f2=0;
            }
            else if(f2==0)
            {
                alice+=(i+(i+1));
                n-=(i+(i+1));
                f2=1;
                f1=0;
            }
        }

        cout<<alice<<" "<<bob<<"\n";


    }



    return 0;
}

/*if(f1==0)
            {
                alice=i;
                bob=(i+1)+(i+2);
                n-=(i+(i+1)+(i+2));
                f=1;
                f2=0;
            }
            else if(f2==0)
            {
                bob=;
                alice=i;
                n-=(i+(i+1)+(i+2));
                f=1;
                f2=0;
}*/
