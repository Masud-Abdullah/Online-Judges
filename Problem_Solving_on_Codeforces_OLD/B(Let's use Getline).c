#include<stdio.h>
int main()
{
    char s[1000001];
    gets(s);

    int i=0;
    while(s[i]!='\0')
    {
        if(s[i]=='\\')
        {
            break;
        }
        printf("%c",s[i]);
        i++;
    }

    return 0;
}
