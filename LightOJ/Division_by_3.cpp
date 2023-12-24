#include <bits/stdc++.h>
#define nl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ss " "
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define sz(v) (int)v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cout << "Case " << i << ": ";
        ll n, m, j;
        cin >> n >> m;

        ll cnt = 0, tmp = 0, a, b;

        if(n%10==0)
        {
            a=n;
        }
        else 
        {
            for(j=n-1;j%10!=0;j--)
            {
                if((j-1)%10==0 || (j-4)%10==0 || (j-7)%10==0 || (j-10)%10==0)continue;
                else tmp++;
            }
            a=j;
        }

        if(m%10==0)
        {
            //tmp++;
            b=m;
        }
        else 
        {
            for(j=m+1;j%10!=0;j++)
            {
                if((j-1)%10==0 || (j-4)%10==0 || (j-7)%10==0 || (j-10)%10==0)continue;
                else tmp++;
            }
            tmp++;
            b=j;
        }

        cnt+=(b-a)-(((b-a)/10)*4)-tmp;
        cout<<cnt<<nl;
        cout<<a<<" "<<b<<" "<<tmp<<nl;
    }
    return 0;
}
/*
 if (n % 10 != 0)
        {
            j = n - 1;
            for (;; j--)
            {
                if(j % 10 == 0)
                {
                    //tmp++;
                    break;
                }
                    tmp++;
            }
        }
        else 
        {
            j = n;
            if(j%3==0)tmp++;
        }
        a = j;

        if (m % 10 != 0)
        {
            j = m + 1;
            for (; ; j++)
            {
                if(j % 10 == 0)
                {
                    tmp++;
                    break;
                }
                if (j % 3 == 0)
                    tmp++;
            }
        }
        else
            j = m;
        b = j;
        */
       // cnt += /*(b-a)-*/ //((b - a) / 10) * 7 -tmp;
       // cout << cnt<< '\n';
           //cout<<a<<" "<<b<<" "<<tmp<<nl;
