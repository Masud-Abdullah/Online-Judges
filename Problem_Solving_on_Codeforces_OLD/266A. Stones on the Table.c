#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==str[i+1])count++;
    }

    printf("%d\n",count);

    return 0;
}
