#include<stdio.h>
int main()
{
    int t,len;
    scanf("%d",&t);
    char str[1001];

    while(t--)
    {
        scanf("%s",str);
        len= strlen(str);

        if(str[len-2]=='p' && str[len-1]=='o')printf("FILIPINO\n");
        else if((str[len-4]=='d' && str[len-3]=='e' && str[len-2]=='s' && str[len-1]=='u')||
                (str[len-4]=='m' && str[len-3]=='a' && str[len-2]=='s' && str[len-1]=='u'))printf("JAPANESE\n");
        else if(str[len-5]=='m' && str[len-4]=='n' && str[len-3]=='i' && str[len-2]=='d' && str[len-1]=='a')printf("KOREAN\n");
    }

    return 0;
}

