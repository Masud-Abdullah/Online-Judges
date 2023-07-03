#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s",s);

    int i,j,flag,len=strlen(s);

    for(i=0,j=len-1; j>=0; i++,j--)
    {
        t[i]=s[j];
    }
    t[i]='\0';

    flag=strcmp(s,t);

    if(flag==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
