#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int sum_primary=0,sum_secondary=0,dif;

    for(i=0,j=0;i<n;i++,j++)
    {
        sum_primary=sum_primary+a[i][j];
    }
    for(i=0,j=n-1;i<n;i++,j--)
    {
        sum_secondary=sum_secondary+a[i][j];
    }
    dif=sum_primary-sum_secondary;

    if(dif<0)
    {
        printf("%d\n",(dif*(-1)));
    }
    else
    {
        printf("%d\n",dif);
    }


    return 0;
}
