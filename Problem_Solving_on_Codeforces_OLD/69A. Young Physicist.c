#include<stdio.h>
int main()
{
    int n,a[100][100],sum=0,sum1=0,sum2=0;
    scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
            {
                sum+=a[i][0];
                sum1+=a[i][1];
                sum2+=a[i][2];
            }
        }




    if(sum==0 && sum1==0 && sum2==0)printf("YES\n");
    else printf("NO\n");

    return 0;
}
