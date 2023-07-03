#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        int i,j,flag=0,n=0,flag2=0;
        char temp;
        for(i=0;i<str.size();i++)n++;
        for(i=0;i<str.size()-1;i++)
        {
            if(str[i]!=str[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)cout<<-1<<endl;
        else
        {
            for(i=0,j=str.size()-1;i<str.size()/2;i++,j--)
            {
                if(str[i]!=str[j])
                {
                    flag2=1;
                    break;
                }
            }
            if(flag2==1)cout<<str<<endl;
            else
            {
                for(i=0;i<str.size()-1;i++)
            {
                for(j=1;j<str.size();j++)
                {
                    if(str[i]<str[j])
                    {
                        temp=str[i];
                        str[i]=str[j];
                        str[j]=temp;
                    }
                }
            }
            cout<<str<<endl;
            }

        }
    }

    return 0;
}
