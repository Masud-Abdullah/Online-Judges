#include<iostream>
using namespace std;
int main()
{
    char str[101],ch;
    cin>>str;
    //cout<<str<<endl;
    int flag=0;
    for(ch='a';ch<='z';ch++)
    {
        for(int i=0;str[i]!='\0';i++)
        {
            if(str[i]==ch)
            {
                flag++;
                break;
            }
        }
    }

    if(flag%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
