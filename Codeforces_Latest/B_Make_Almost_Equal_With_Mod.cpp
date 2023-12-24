#include <bits/stdc++.h>
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    FIO;
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];
        long long p = 1;
        bool f = false;
        while (1)
        {
            vector<long long> ans;
            for (long long i = 0; i < n; i++)
            {
                long long x = a[i] % p;
                ans.push_back(x);
            }
            sort(ans.begin(), ans.end());
            long long cnt = 1;
            for (long long i = 1; i < ans.size(); i++)
                if (ans[i] != ans[i - 1])
                    cnt++;

            if (cnt == 2)
            {
                cout << p << '\n';
                break;
            }
            // for(long long i=0;i<n;i++)cout<<ans[i]<<" ";
            // cout<<'\n';
            p++;
            if (p == 10000)
            {
                f = true;
                break;
            }
        }

        if (f)
        {
            sort(a,a+n);
            p=a[n-1];
            long long q=a[n-1];
            while (1)
            {
                vector<long long> ans;
                for (long long i = 0; i < n; i++)
                {
                    long long x = a[i] % p;
                    ans.push_back(x);
                }
                sort(ans.begin(), ans.end());
                long long cnt = 1;
                for (long long i = 1; i < ans.size(); i++)
                    if (ans[i] != ans[i - 1])
                        cnt++;

                if (cnt == 2)
                {
                    cout << p << '\n';
                    break;
                }
                // for(long long i=0;i<n;i++)cout<<ans[i]<<" ";
                // cout<<'\n';
                p--;
                if (p == q-10000)
                {
                    f = true;
                    break;
                }
            }
        }
    }
    return 0;
}