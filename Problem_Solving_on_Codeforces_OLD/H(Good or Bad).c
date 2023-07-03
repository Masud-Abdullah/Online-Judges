#include<stdio.h>
int main()
{
    char s[100001];
    int test,i,j,flag;
    scanf("%d",&test);

    for(i=0;i<test;i++)
    {
        flag=0;
        scanf("%s",s);
        for(j=0;s[j]!='\0';j++)
        {
            if((s[j]=='0'&&s[j+1]=='1'&&s[j+2]=='0')||(s[j]=='1'&&s[j+1]=='0'&&s[j+2]=='1'))
            {
                flag=1;
                break;
            }
        }
        if(flag==1)printf("Good\n");
        else printf("Bad\n");
    }
    return 0;
}



/*#include<stdio.h>
int main()
{
    int i,flag,test;
    char s[100001];
    scanf("%d",&test);

    while(test--)
    {
        scanf("%s",s);
        flag=0;
        for(i=0; s[i] !='\0'; i++)
        {

            if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1'))
            {
                flag=1;
                break;
            }

        }

        if(flag==1) printf("Good\n");
        else printf("Bad\n");
    }


    return 0;
}
*/
