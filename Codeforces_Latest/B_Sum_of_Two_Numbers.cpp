#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define sz(v) (int)v.size()
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
    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << n / 2 << " " << n / 2 << nl;
            continue;
        }

        int x = n / 2, y = n - x;
        if (n % 20 == 19)
        {
            int i = 0, sod1 = 0, sod2 = 0;
            bool f = true;
            string s = to_string(n);
            string ft = "", sd = "";
            while (i < sz(s))
            {
                if (sod1 >= sod2)
                {
                    int tm = s[i] - '0';
                    string tm1 = to_string(tm / 2);
                    string tm2 = to_string(tm - (tm / 2));
                    ft += tm1;
                    sd += tm2;
                    sod1 += (tm1.back() - '0');
                    sod2 += (tm2.back() - '0');
                }
                else
                {
                    int tm = s[i] - '0';
                    string tm1 = to_string(tm / 2);
                    string tm2 = to_string(tm - (tm / 2));
                    ft += tm2;
                    sd += tm1;
                    sod1 += (tm2.back() - '0');
                    sod2 += (tm1.back() - '0');
                }
                i++;
            }
            reverse(ft.begin(), ft.end());
            reverse(sd.begin(), sd.end());

            while (ft.back() == '0')
                ft.pop_back();
            while (sd.back() == '0')
                sd.pop_back();

            reverse(ft.begin(), ft.end());
            reverse(sd.begin(), sd.end());

            for (int i = 0; i < sz(ft); i++)
            {
                cout << ft[i];
            }
            cout << " ";
            for (int i = 0; i < sz(sd); i++)
            {
                cout << sd[i];
            }
            cout << nl;
        }
        else
        {
            cout << x << " " << y << nl;
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


// int main(){
//     Faster;
//     int t;                  cin>>t;
//     while(t--){
//         int n;              cin>>n;

//         if(n%2==0){
//             cout<<(n/2)<<" "<<(n/2)<<endl;
//             continue;
//         }

//         int x=n/2,y=n-x;        //Algobot

//         if(n%20==19){
//             string c=to_string(n);
//             string a=c,b=c;
//             int SOD1=0,SOD2=0;

//             for(int i=0;i<a.size();i++){
//                 int v1,v2;
//                 v1=(c[i]-'0')/2;
//                 v2=(c[i]-'0')-v1;
              
//                 if(SOD1>=SOD2){
//                     b[i]='0'+v2;
//                     a[i]='0'+v1;
//                     SOD2+=(b[i]-'0');
//                     SOD1+=(a[i]-'0');
//                 }
//                 else{
//                     a[i]='0'+v2;
//                     b[i]='0'+v1;
//                     SOD2+=(b[i]-'0');
//                     SOD1+=(a[i]-'0');
//                 }
//             }
//             reverse(a.begin(),a.end());
//             reverse(b.begin(),b.end());
//             while(b.back()=='0')b.pop_back();
//             while(a.back()=='0')a.pop_back();
//             reverse(a.begin(),a.end());
//             reverse(b.begin(),b.end()); 
//             cout<<a<<" "<<b<<endl;
//         }
//         else{
//             cout<<x<<" "<<y<<endl;
//         }
//     }
//     return 0;
// }
