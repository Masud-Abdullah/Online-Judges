#include<bits/stdc++.h>
using namespace std;

int main(){

    int ans=0,cnt=0;
    string s1,s2;
    cin>> s1 >> s2;

    int len1=s1.size();
    int len2=s2.size();

    ans = abs(len1-len2);

    //reverse(s1.begin(),s1.end());
    //reverse(s2.begin(),s2.end());

    for(int i=0;i<min(s1.size(),s2.size());i++)
    {
        if(s1[i] != s2[i]) ans+=2;
    }

    cout << ans << endl;


    return 0;
}


/*#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

int main()
{
    ll i,j,cnt=0;
    string s1,s2;
    cin>>s1>>s2;

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[i])cnt++;
        else if(s1[i]!=s2[i])break;
    }
    //cout<<cnt<<nl;
    ll ans=(s1.size()-cnt)+(s2.size()-cnt);

    cout<<ans<<nl;

    return 0;
}

*/
