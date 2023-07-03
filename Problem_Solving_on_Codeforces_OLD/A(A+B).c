#include<stdio.h>
int main()
{
    int test,a,b;
    char p;
    scanf("%d",&test);

    while(test--)
    {
       scanf("%d%c%d",&a,&p,&b);
       printf("%d\n",a+b);
    }

    return 0;
}
