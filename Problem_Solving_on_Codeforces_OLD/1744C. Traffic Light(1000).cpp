









/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,maxx=0,f=-1,last_pos,first_pos,G=0;
        char c;
        string s;
        cin>>n>>c;
        cin>>s;

         for(i=0;i<s.size();i++)
         {
             int cnt;
             /*if(s[0]==c)cnt=1;
             else cnt=0;*/
             /*if(s[i]==c)
             {
                 /*if(i==0)cnt=1;
                 else*/ //cnt=1;
                 /*for(j=i;s[j]<s.size();j++)
                 {
                     cnt++;
                     if(s[j]=='g')break;
                 }
             }

             if(cnt>=maxx)maxx=cnt;

         }

         for(i=n-1;i>=0;i--)
         {
             if(s[i]==c)
             {
                 f=1;
                 last_pos=i+1;
                 break;
             }else if(s[i]=='g')
             {
                 f=0;
                 break;
             }
         }
         for(i=0;i<n;i++)
         {
             if(s[i]=='g')
             {
                 first_pos=i+1;
                 break;
             }
         }
         for(i=0;i<s.size();i++)
         {
             if(s[i]!='g')
             {
                 G=1;
                 break;
             }
         }

         if(G==0)cout<<G<<endl;
         else if(f==1)
         {
             cout<<(n-last_pos)+first_pos<<endl;
         }
         else cout<<maxx<<endl;


    }

    return 0;
}
*/
