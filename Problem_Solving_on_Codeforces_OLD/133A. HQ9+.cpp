#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;;
    char str[101];
    cin>> str;

    for(int i=0;str[i] != '\0';i++)
    {
        if(str[i]== 'H' || str[i]== 'Q' || str[i]== '9')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}
