#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d%d",&x,&p);
    float ans;

    ans=(((float)p/(100-(float)x))*100);
    printf("%.2f\n",ans);
    return 0;
}
