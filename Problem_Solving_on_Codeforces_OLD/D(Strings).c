#include<stdio.h>
#include <string.h>
int main()
{
    char a[1000],b[1000],c[1000],temp;
    gets(a);
    gets(b);

    int len_a=strlen(a);
    int len_b=strlen(b);
    strlen(b);
    printf("%d %d\n",len_a,len_b);

    strcpy(c,a);
    strcat(a,b);
    printf("%s\n",a);

    temp=c[0];
    c[0]=b[0];
    b[0]=temp;

    printf("%s %s\n",c,b);

    return 0;
}

