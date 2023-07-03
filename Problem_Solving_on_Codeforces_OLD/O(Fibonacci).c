#include<stdio.h>
int main()
{
    long long n,i;
    scanf("%d",&n);

    long long a[100];

    a[1]=0;
    a[2]=1;
    for(i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    printf("%lld\n",a[n]);




    return 0;
}
