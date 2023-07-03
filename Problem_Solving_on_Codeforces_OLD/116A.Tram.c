#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ext,ent,sum=0,maxx=0;

    while(n--)
    {
        scanf("%d%d",&ext, &ent);

        sum= (sum-ext)+ent;

        if(sum>maxx)maxx=sum;
    }
    printf("%d\n",maxx);


    return 0;
}
