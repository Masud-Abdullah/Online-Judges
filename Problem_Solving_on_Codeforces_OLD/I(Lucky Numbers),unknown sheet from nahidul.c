#include<stdio.h>
int main()
{
    int n,div,rem;
    scanf("%d",&n);

    rem=n%10;
    div=n/10;

    if(rem%div==0 || div%rem==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

