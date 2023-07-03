// #include<bits/stdc++.h>
// #define   nl         "\n"
// #define   nn         (cout << "NO\n")
// #define   yy         (cout << "YES\n")
// #define   ss         " "
// #define   ll         long long
// #define   pi         pair<int,int>
// #define   rv(v)      v.begin(),v.end()
// #define   sz(v)      v.size()
// #define   mm(a,x)    memset(a,x,sizeof(a))
// #define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// void solve()
// {
//     int n;
//     cin>>n;
//     ll a[n+100];
//     for(int i=0;i<n;i++)cin>>a[i];

//     if(n==1)
//     {
//         cout<<a[0]<<nl;
//         return;
//     }

//     int x= *min_element(a,a+n),indx,ln=n,mn=1e9;

//     while(ln>1)
//     {
//         int ln=0;
//         for(int i=0;i<n;i++)
//     {
//         ln++;
//         if(a[i]==x)
//         {
//             indx=i;
//         }
//     }   

//     for(int i=indx;i<ln;i++)
//     {
//         a[i]=a[i+1];
//     }

//     for(int i=0;i<ln-1;i++)
//     {
//         a[i]=a[i]-x;
//         if(a[i]<mn)mn=a[i];
//     }
//     }
    
//     cout<<mn<<nl;
//     //return mn;
// }
// int main()
// {
//     FIO;
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;

         int y=x/10;
	    if(x%10==0)cout<<100-x<<endl;
	    else if(y*10+5<=x)cout<<100-((x/10)+1)*10<<endl;
	    else cout<<100-(y*10)<<endl;
	}
	return 0;
}
