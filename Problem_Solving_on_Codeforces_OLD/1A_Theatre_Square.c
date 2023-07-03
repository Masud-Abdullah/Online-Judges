#include<stdio.h>
int main()
{
    long long n,m,a,p,q;
    scanf("%lld%lld%lld",&n,&m,&a);

       if(n%a==0)p=n/a;
        else if(n%a!=0)p=(n/a)+1;

        if(m%a==0)q=m/a;
        else if(m%a!=0)q=(m/a)+1;

        printf("%lld\n",p*q);

    return 0;
}

/*#include<stdio.h>
int main()
{
    long long n,m,a,p,q;
    scanf("%lld%lld%lld",&n,&m,&a);


    if(n==a && m==a )printf("1\n");
    else
    {
        if(n%a==0)p=n/a;
        else if(n%a!=0)p=(n/a)+1;

        if(m%a==0)q=m/a;
        else if(m%a!=0)q=(m/a)+1;

        printf("%lld\n",p*q);
    }

    return 0;
}
*/
