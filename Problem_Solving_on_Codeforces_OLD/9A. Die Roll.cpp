#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    fio;

    int a,b;
    cin >> a >>b;  //Asif Abdullah Ibne Saiful

    int mx = max(a,b);

    int numerator = 6-mx+1;
    int dominator = 6;

    if(dominator%numerator==0) cout << numerator/numerator<<"/"<< dominator/numerator<< endl;
    else if(dominator%2==0 && numerator%2==0) cout << numerator/2<<"/"<< dominator/2<< endl;
    else cout << numerator << "/"<< dominator<< endl;

    return 0;
}

