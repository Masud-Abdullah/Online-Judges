#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int max=a[0],max_indx;
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
             max=a[i];
             max_indx=i;
        }

    }

    int min=a[0],min_indx;
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            min_indx=i;
        }
    }

    a[max_indx]=min;
    a[min_indx]=max;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
