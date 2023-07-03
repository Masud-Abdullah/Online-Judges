#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0 && n>1)
        {
            printf("%d\n",i);
        }
        else if(n==1)printf("-1\n");
    }

    return 0;
}
