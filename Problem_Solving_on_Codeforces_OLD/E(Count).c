#include<stdio.h>
int main()
{
    char a[1000008];
    scanf("%s",&a);

    int i,sum=0;

    for(i=0; a[i]!='\0'; i++)
    {
        sum=sum+(a[i]-48);
    }
    printf("%d\n",sum);
    return 0;
}
