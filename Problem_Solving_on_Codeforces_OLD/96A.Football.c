#include<stdio.h>
int main()
{
    char s[101];
    scanf("%s",s);
    int i,flag=0;

    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0' )||(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'))
        {
            flag=0;
            break;
        }
        else{
                flag=1;
            }
    }

    if(flag==0)printf("YES\n");
    else
    {
        printf("NO\n");
    }


    return 0;
}
