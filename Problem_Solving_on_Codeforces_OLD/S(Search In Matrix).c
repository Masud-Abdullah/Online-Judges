#include<stdio.h>
int main()
{
    int n,m,row,col,x,flag=0;
    scanf("%d%d",&m,&n);

    int a[n][m];

    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    scanf("%d",&x);

    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            if(a[row][col]==x)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("will take number\n");
    }
    else if(flag==1)
    {
        printf("will not take number\n");
    }


    return 0;
}
