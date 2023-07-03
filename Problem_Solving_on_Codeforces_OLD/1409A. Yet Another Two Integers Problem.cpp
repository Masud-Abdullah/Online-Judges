#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans=abs(a-b);

        if(a==b)cout<<"0"<<endl;
        else if(ans%10==0)cout<<ans/10<<endl;
        else if(ans%10!=0)cout<<(ans/10)+1<<endl;

    }
    return 0;
}

















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a==b)cout<<"0"<<endl;
        else if(a>b)
        {
            int op1=0;
            while(1)
            {
                if(a==b)
                {
                    cout<<op1<<endl;
                    break;
                }

                if(a-10>=b)
                {
                    a-=10;
                    op1++;
                }
                else
                {
                    a=a-(a-b);
                    op1++;
                }
            }

        }
        else if(b>a)
        {
            int op2=0;
            while(1)
            {
                if(a==b)
                {
                    cout<<op2<<endl;
                    break;
                }

                if(a+10<=b)
                {
                    a+=10;
                    op2++;
                }
                else
                {
                    a=a+(b-a);
                    op2++;
                }
            }
        }

        //cout<<op<<endl;

    }

    return 0;
}
*/
