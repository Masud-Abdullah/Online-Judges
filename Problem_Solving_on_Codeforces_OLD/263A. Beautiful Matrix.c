#include<stdio.h>
int main()
{
    int i,j,a[5][5],row,col,x,y;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]==1)
            {
                row=i+1;
                col=j+1;
                //printf("%d %d",row,col);
                break;
            }

        }
    }

    if(row==1 || row==5) x=2;
    else if(row==2 || row==4) x=1;
    else if(row==3) x=0;

    if(col==1 || col==5) y=2;
    else if(col==2 || col==4) y=1;
    else if(col==3) y=0;

    printf("%d\n",x+y);






    return 0;
}

