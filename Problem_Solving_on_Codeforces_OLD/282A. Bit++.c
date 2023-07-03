#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    char str[5];

    while(n--)
    {
        scanf("%s",str);
        if(str[1]=='+')x=x+1;
        else if(str[1]=='-');

    }

    printf("%d",x);


    return 0;
}
/*#include<stdio.h>
int main()
{
    int n,x=0;
    scanf("%d",&n);
    char str[5];

    while(n--)
    {
        scanf("%s",str);
        if(str[1]=='+')x=x+1;
        else x=x-1;

    }

    printf("%d",x);


    return 0;
}*/
