#include<iostream>
using namespace std;
int main()
{
    char n[1001];
    cin>>n;
    int flag=0;

    for(int i=0;n[i]!='\0';i++)
    {
        if(n[i]-48==4 || n[i]-48==7)flag++;
    }

    if(flag==4 || flag==7)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
