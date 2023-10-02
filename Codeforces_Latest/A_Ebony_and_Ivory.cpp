// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a,b,c,smA=0,smB=0;
//     cin>>a>>b>>c;
//     bool f= false;
//     while(true)
//     {
//         smA+=a;
//         if(smA>c)break;
//         if(smA==c || (c-smA)%b==0)
//         {
//             //cout<<smA<<'\n';
//             f=true;
//             break;
//         }
//     }

//     while(true)
//     {
//         smB+=b;
//         if(smB>c)break;
//         if(smB==c || (c-smB)%a==0)
//         {
//             //cout<<smB<<'\n';
//             f=true;
//             break;
//         }
//     }

//     if(f)cout<<"Yes\n";
//     else cout<<"No\n";

//     return 0;
// }

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;         

    int a, b, c, i, j;
    cin >> a >> b >> c;
    bool flag = false;            //muhammad sayem

    for(i=0; i<=10003; i++){
        for(j=0; j<=10003; j++){
            if(a*i + b*j == c){
                flag = true;
                break;
            }
        }
    }

    if(flag) cout << yes << endl;
    else cout << no << endl;

    return 0;
}