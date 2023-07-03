#include<stdio.h>
int main()
{
    char str[1001],ch;
    scanf("%s",str);


    for(ch='a';ch<='z';ch++)
    {
        if(str[0]==ch)
        {
            str[0]=str[0]-32;
             break;
        }
        else str[0]=str[0];
    }

    printf("%s",str);

    return 0;
}
