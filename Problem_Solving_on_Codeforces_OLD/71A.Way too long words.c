#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len;
    scanf("%d",&t);
    char s[101];

    for(i=0;i<t;i++)
        {
            scanf("%s",&s);
            len=strlen(s);

            if(len<=10)
            {
                printf("%s\n",s);
            }
            else
            {
                printf("%c%d%c\n",s[0],len-2,s[len-1]);
            }

        }

    return 0;
}


/*#include<stdio.h>
#include<string.h>
int main()
{
    char ch[101];
    int n,i,j,len,count;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",ch);
        len=strlen(ch);
        if(len<=10)
        {
            printf("%s\n",ch);
        }
        else
        {
            count=0;
            for(j=1;j<len-1;j++)
            {
                count++;
            }
            printf("%c%d%c\n",ch[0],count,ch[len-1]);
        }

    }

    return 0;

}
*/
