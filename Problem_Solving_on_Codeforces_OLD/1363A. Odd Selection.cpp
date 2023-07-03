#include<bits/stdc++.h>
#define   nl         "\n"
#define   yy         "YES"
#define   nn         "NO"
#define   ss         " "
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t,n,x;
   int even,odd;

   cin>>t;

   while(t--)
   {
       cin>>n>>x;

       even=odd=0;

       int val;

       for(int i=0;i<n;i++)
       {
          cin>>val;

          if(val%2==0)even++;
          else odd++;
       }


       int tm=x;
       int tm2=odd;

       if(x%2==0)tm--;
       if(odd%2==0)tm2--;

       tm=min(tm,tm2);

       if(odd==0)cout<<"NO"<<endl;
       else if(tm+even>=x)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
   }

    return 0;
}



