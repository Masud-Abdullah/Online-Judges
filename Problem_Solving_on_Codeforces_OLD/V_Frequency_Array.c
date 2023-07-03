/*#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    int b[m]={0};
   /* for(int i=1;i<=m;i++)
    {
        b[i]=0;
    }*/
/*
    for(int i=1;i<=n;i++)
    {
        b[a[i]]++;
    }

    for(int i=1;i<=m;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
     char x[25],y[25];
     scanf("%s %s",x,y);

     int i=0;
     while(1)
     {
        if(x[i]=='\0' && y[i]=='\0')
        {
            printf("%s\n",x);
            break;
        }
        else if(x[i]=='\0')
        {
            printf("%s\n",x);
            break;
        }
        else
        {
            printf("%s\n",y);
            break;
        }

        if(x[i]==y[i])
        {
            i++;
        }
        else if(x[i]<y[i])
        {
            printf("%s\n",x);
            break;
        }
        else if(x[i]>y[i])
        {
            printf("%s\n",y);
            break;
        }
     }
    return 0;
}
