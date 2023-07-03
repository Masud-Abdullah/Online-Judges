#include<stdio.h>
int main()
{
    int year,ans,a,b,c,d;

    scanf("%d",&year);

    for(year=year+1;year!= -1;year++)
    {
        ans=year;

        d=year%10;
        year=year/10;

        c=year%10;
        year=year/10;

        b=year%10;
        year=year/10;

        a=year%10;
        year=year/10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
    {
        printf("%d\n",ans);
        break;
    }
    year=ans;
    }




    return 0;
}
