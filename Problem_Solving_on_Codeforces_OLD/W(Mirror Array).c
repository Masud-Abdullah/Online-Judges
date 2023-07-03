#include<stdio.h>
int main()
{
      int n,m,i,j,k,temp;
      scanf("%d%d",&n,&m);

      int arr[n][m];

      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              scanf("%d",&arr[i][j]);
          }
      }

     /* for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              printf("%d ",arr[i][j]);
          }
          printf("\n");
      }*/

      for(i=0;i<n;i++)
      {
          for(j=0,k=m-1;j<m/2;j++,k--)
          {
              temp=arr[i][j];
              arr[i][j]=arr[i][k];
              arr[i][k]=temp;
          }
      }

      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              printf("%d ",arr[i][j]);
          }
          printf("\n");
      }

    return 0;
}


