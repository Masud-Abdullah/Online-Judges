#include<stdio.h>
#include<string.h>
int main()
{
    short int n;
    scanf("%d",&n);

    char s[n],temp;
    scanf("%s",s);

     short int i,j;

     for(i=0;i<n;i++)
     {
         for(j=i+1;j<n;j++)
         {
             if(s[i]>s[j])
             {
                 temp=s[i];
                 s[i]=s[j];
                 s[j]=temp;
             }
         }
     }

     printf("%s",s);
    return 0;
}
