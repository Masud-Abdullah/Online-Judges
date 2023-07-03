#include<stdio.h>
int main()
{
    char str[101];
    scanf("%s",str);

    for(int i=0;str[i]!='\0';i++)
    {
        //i++;
        if(str[i]=='A' || str[i]=='O' || str[i]=='Y' || str[i]=='E' || str[i]=='U' || str[i]=='I' ||
           str[i]=='a' || str[i]=='o' || str[i]=='y' || str[i]=='e' || str[i]=='u' || str[i]=='i')
           {
               continue;
           }
           else
           {
               if(str[i]>='A' && str[i]<='Z')
                str[i]+=32;
           }
           printf(".%c",str[i]);

    }

    return 0;
}
//"A", "O", "Y", "E", "U", "I",
