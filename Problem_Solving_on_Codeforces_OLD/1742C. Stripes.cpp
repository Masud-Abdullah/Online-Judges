#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int i,j;
        string s1,s2,s3,s4,s5,s6,s7,s8;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        cin>>s4;
        cin>>s5;
        cin>>s6;
        cin>>s7;
        cin>>s8;

        int f=0;
        for(i=0;s1.size();i++)
        {
            if(s1[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else
        {
            f=0;
        for(i=0;s2.size();i++)
        {
            if(s2[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else{
            f=0;
        for(i=0;s3.size();i++)
        {
            if(s3[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else{
            f=0;
        for(i=0;s4.size();i++)
        {
            if(s4[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else{
            f=0;
        for(i=0;s5.size();i++)
        {
            if(s5[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else{
            f=0;
        for(i=0;s6.size();i++)
        {
            if(s6[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else{
            f=0;
        for(i=0;s7.size();i++)
        {
            if(s7[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else{
            f=0;
        for(i=0;s8.size();i++)
        {
            if(s8[i]=='R')
            {
                f++;
            }
        }
        if(f==8)cout<<"R"<<endl;
        else cout<<"B"<<endl;
        }
        }
        }
        }
        }
        }
        }
    }

    return 0;
}
















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        int i,j,f=0;
        string s1,s2,s3,s4,s5,s6,s7,s8;
        cin>>s1;
        cin>>s2;
        cin>>s3;
        cin>>s4;
        cin>>s5;
        cin>>s6;
        cin>>s7;
        cin>>s8;

        for(i=7;i>=0;i--)
        {
            if(s8[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }
            else if(s7[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s6[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s5[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s4[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s3[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s2[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }
            else if(s1[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }
            else cout<<"B"<<endl;
            /*else if(s8[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }
            else if(s7[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s6[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s5[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s4[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s3[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s2[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }else if(s1[i]=='R')
            {
                cout<<"R"<<endl;
                break;
            }*/

     /*   }


    }

    return 0;
}
*/
/*for(j=7;j>=0;j--)
        {
            for(i=7;i>=0;i--)
            {
                if(s[i][j]=='B')
                {
                    cout<<"B"<<endl;
                    f=-1;
                    break;
                }
                else if(s[i][j]=='R')
                {
                    cout<<"R"<<endl;
                    f=-1;
                    break;
                }
            }
            if(f==-1) break;
        }*/
