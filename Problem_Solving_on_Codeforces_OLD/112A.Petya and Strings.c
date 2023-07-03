#include<stdio.h>
int main()
{
    int i,ans=0;
    char str1[101],str2[101];

    scanf("%s",str1);
    scanf("%s",str2);

   for(i=0;str1[i]!='\0';i++)
   {
       if(str1[i]>='A' && str1[i]<='Z')str1[i]=str1[i]+32;
       if(str2[i]>='A' && str2[i]<='Z')str2[i]=str2[i]+32;

       if(str1[i]>str2[i])
       {
           ans=1;
       break;
       }
       else if(str1[i]<str2[i])
       {
           ans= -1;
           break;
       }
   }
   printf("%d\n",ans);

    return 0;
}
