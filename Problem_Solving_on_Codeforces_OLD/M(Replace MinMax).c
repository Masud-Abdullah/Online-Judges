#include<stdio.h>
int main()
{
    int n,i,max_indx,min_indx;
    scanf("%d",&n);
    int a[n];

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max=a[0],min=a[0];

    for(i=1; i<n; i++)
    {
        if(max>a[i])
        {
            max=a[i];
            max_indx=i;
        }
    }
    for(i=1; i<n; i++)
    {
        if(min<a[i])
        {
            min=a[i];
            min_indx=i;
        }
    }

    a[max_indx]=min;
    a[min_indx]=max;

    for(i=0; i<n; i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
