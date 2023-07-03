#include<stdio.h>
int main()
{

    int i,n,anton=0,danik=0;
    scanf("%d",&n);
    char str[100001];
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A')anton++;
        else if(str[i]=='D')danik++;
    }

    if(anton>danik)printf("Anton\n");
    else if(danik>anton)printf("Danik\n");
    else printf("Friendship\n");


    return 0;
}
