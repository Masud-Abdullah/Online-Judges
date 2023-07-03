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
        ll n,i,alice=0,bob=0,f1=0,f2=1, alice_w=0,alice_b=0,bob_w=0,bob_b=0;
        cin>>n;

        n-=1;
        alice+=1;
        alice_w+=1;

        for(i=2; n>0; i=i+2)
        {
            if((n-i)<0 || (n-(i+(i+1)))<0)
            {
                if(f1==0)
                {
                    bob+=n;
                    if(n%2!=0)
                    {
                        bob_b+=(n/2)+1;
                        bob_w+=(n/2);
                        break;
                    }
                    else if(n%2==0)
                    {
                        bob_b+=(n/2);
                        bob_w+=(n/2);
                        break;
                    }

                }
                else if(f2==0)
                {
                    alice+=n;
                   if(n%2!=0)
                    {
                        alice_w+=(n/2)+1;
                        alice_b+=(n/2);
                        break;
                    }
                    else if(n%2==0)
                    {
                        alice_w+=(n/2);
                        alice_b+=(n/2);
                        break;
                    }
                }
            }


            if(f1==0)
            {
                bob+=(i+(i+1));
                n-=(i+(i+1));
                f1=1;
                f2=0;

                bob_b+=((i+(i+1))/2)+1;
                bob_w+=((i+(i+1))/2);
            }
            else if(f2==0)
            {
                alice+=(i+(i+1));
                n-=(i+(i+1));
                f2=1;
                f1=0;

                alice_w+=((i+(i+1))/2)+1;
                alice_b+=((i+(i+1))/2);
            }
        }

        cout<<alice_w<<" "<<alice_b<<" "<<bob_w<<" "<<bob_b<<"\n";


    }



    return 0;
}
