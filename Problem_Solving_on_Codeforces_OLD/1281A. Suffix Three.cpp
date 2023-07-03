/*#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
   int t;
   cin>>t;

   while(t--)
   {
       char str[1001];
       cin>>str;

       strrev(str);

       if(str[0]=='o')cout<<"FILIPINO"<<endl;
       else if(str[0]=='u')cout<<"JAPANESE"<<endl;
       else if(str[0]=='a')cout<<"KOREAN"<<endl;
   }
    return 0;
}
*/

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   getchar();

   while(t--)
   {
       char str[1001];
       int i,len=0;
       cin>>str;

       for(i=0;str[i]!='\0';i++)len++;

       if(str[len-1]=='o')cout<<"FILIPINO"<<endl;
       else if(str[len-1]=='u')cout<<"JAPANESE"<<endl;
       else if(str[len-1]=='a')cout<<"KOREAN"<<endl;
   }
    return 0;
}









