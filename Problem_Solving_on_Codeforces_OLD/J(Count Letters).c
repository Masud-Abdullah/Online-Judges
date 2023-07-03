#include<stdio.h>
int main()
{
     char s[10000001];
     scanf("%s",s);

     for(char ch='a';ch<='z';ch++)
     {
        int cnt=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]==ch)cnt++;
        }
       if(cnt>0) printf("%c : %d\n",ch,cnt);
     }
    return 0;
}
