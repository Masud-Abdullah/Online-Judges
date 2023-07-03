#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);

    while(test--)
    {
       int i,j,a[2][2];
       for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }

      /*if(a[0][0]>a[0][1])
      {
          temp=a[0][0];
          a[0][0]=a[0][1];
          a[0][1]=temp;
      }

      if(a[1][0]>a[1][1])
      {
          temp=a[1][0];
          a[1][0]=a[1][1];
          a[1][1]=temp;
      }
      if(a[0][0]>a[1][0])
      {
          temp=a[0][0];
          a[0][0]=a[1][0];
          a[1][0]=temp;
      }

      if(a[0][1]>a[1][1])
      {
          temp=a[0][1];
          a[0][1]=a[1][1];
          a[1][1]=temp;
      }*/

     if(a[0][0]<a[0][1] && a[1][0]<a[1][1] && a[0][0]<a[1][0] && a[0][1]<a[1][1]){
            printf("YES\n");
        }
        else if(a[0][0]<a[0][1] && a[1][0]<a[1][1] && a[0][0]>a[1][0] && a[0][1]>a[1][1]){
            printf("YES\n");
        }
        else if(a[0][0]>a[0][1] && a[1][0]>a[1][1] && a[0][0]<a[1][0] && a[0][1]<a[1][1]){
            printf("YES\n");
        }
        else if(a[0][0]>a[0][1] && a[1][0]>a[1][1] && a[0][0]>a[1][0] && a[0][1]>a[1][1]){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }


        /*for(i=0;i<2;i++)
       {
           for(j=0;j<2;j++)
           {
               printf("%d ",a[i][j]);
           }
           printf("\n");
       }*/
    }

    return 0;
}

