#include<iostream>
using namespace std;
int main()
{
    char str[101],ch;
    cin>>str;
    int upp=0,low=0,i;


        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A' && str[i]<='Z')upp++;
            else if(str[i]>='a' && str[i]<='z')low++;
        }

        if(upp>low)
        {
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]>='a' && str[i]<='z') str[i]=str[i]-32;
            }
        }
        else
        {
            for(i=0;str[i]!='\0';i++)
            {
                if(str[i]>='A' && str[i]<='Z') str[i]=str[i]+32;
            }
        }

        cout<<str<<endl;


    return 0;
}
