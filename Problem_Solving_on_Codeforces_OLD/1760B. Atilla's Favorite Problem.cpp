#include<iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i;
        cin>>n;
        char str[n+1];
        for(i=0;i<n;i++)
        {
            cin>>str[i];
        }
        str[n]='\0';

        int maxx=str[0];
        for(i=1;str[i]!='\0';i++)
        {
            if(maxx<str[i])maxx=str[i];
        }
        cout<<maxx-96<<endl;
    }


    return 0;
}
