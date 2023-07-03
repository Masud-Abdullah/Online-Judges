#include<stdio.h>
int main()
{
    int test;
    scanf("%d", &test);

    while(test--){

        int n, max1, max2, i;
        scanf("%d", &n);
        int a[n];

        for(i=0; i<n; i++){
            scanf("%d", &a[i]);
        }

        max1 = a[0];
        max2 = a[1];

        if(a[0]>a[1]){
            max1 = a[0];
            max2 = a[1];
        }

        else{
            max1 = a[1];
            max2 = a[0];
        }

        for(i=2; i<n; i++){

            if(a[i] > max1){
                max2 = max1;
                max1 = a[i];
            }
            else if(a[i] <= max1 && a[i] >= max2){
                max2 = a[i];
            }
        }


        for(i=0; i<n; i++){
            if(a[i] < max1){
                printf("%d ", a[i]-max1);
            }
            else if(a[i] >= max1){
                printf("%d ", max1-max2);
            }
        }
        printf("\n");

    }


    return 0;
}























/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);

    while(t--)
    {
        int n,i,j,k,temp;
        scanf("%d",&n);
        int s[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
        int u[n];

        //Copying array s to array u
        for(i=0;i<n;i++)
        {
            u[i]=s[i];
        }

        //By sorting array s
        for(j=0;j<n;j++)
        {
            for(k=j+1;k<n;k++)
                if(s[j]>s[k])
            {
                temp=s[j];
                s[j]=s[k];
                s[k]=temp;
            }
        }


        int max_1=s[n-1],max_2=s[n-2];

        for(i=0;i<n;i++)
        {
            if(u[i]<max_1)printf("%d ",u[i]-max_1);
            else printf("%d ",max_1-max_2);
        }

    }

    return 0;
}
*/

  /*for(i=1;i<n;i++)
        {
            if(s[i]>max_1)max_1=s[i];
        }
        for(i=0;i<n;i++)
        {
            if(s[i]>max_2 && s[i]<max_1)max_2=s[i];
            else if(s[i]==max)
        }*/
       // printf("%d%d",max_1,max_2);
