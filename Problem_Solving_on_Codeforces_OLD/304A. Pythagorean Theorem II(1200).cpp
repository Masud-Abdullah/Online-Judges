#include<bits/stdc++.h>
#define  nl         "\n"
#define  ll     long long
using namespace std;
int main()
{

    ll n;
    cin >> n;
    ll c;
    ll count = 0;

    for(ll i = 1; i <= n; i++){
        for(ll j = 1; j <= n; j++){

            if(/*1 <= i &&*/ i <= j){
                c = (i * i) + (j * j);
                ll hypotenuse = sqrt(c);
                if(hypotenuse*hypotenuse==c && hypotenuse <= n)count++;
                else continue;
                /*if(hypotenuse * hypotenuse != c)continue;
                else if(hypotenuse <= n){
                    count++;
                }*/
            }
        }
    }
    cout << count << endl;
    return 0;
}
//5 12 13
//12 5

