#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n,t,i,flag=0;
    cin>>n>>t;
    string str;
    cin>>str;


     char temp;
    while(t--)
        {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='B' && str[i+1]=='G' && flag==0)
            {
                temp=str[i];
                str[i]=str[i+1];
                str[i+1]=temp;
                flag=1;
            }
            else flag=0;

        }
    }
    cout<<str<<endl;

    return 0;
}
