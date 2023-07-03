#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        string str1="RRRRRRRR";

        for(int i=1; i<=8; i++)
        {
            string str2;
            cin>>str2;
            if(str1==str2)
            {

                f=1;
            }
        }
        if(f==1)cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}
//another way
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int f=0;
        string str2[8];

         for(int i=0; i<8; i++){
                cin>>str2[i];
        }


        for(int i=0; i<8; i++)
        {
            int cnt=0;

            if(str2[i]=="RRRRRRRR")
            {
                f=1;
                break;
            }
        }
        if(f==1)cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }

    return 0;
}
*/
//ager code
/*
#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()      //taken help from Coding Community | Newton School && asif_abdullah's code ///
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        char s[10][10];

        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> s[i][j];
            }
        }

        int cnt_r;

        for (int i = 1; i <= 8; i++)
        {
            cnt_r=0;
            for (int j = 1; j <= 8; j++)
            {
                if(s[i][j]=='R') cnt_r++;       
            }

            if(cnt_r==8) break;
        }

        if(cnt_r==8) cout << "R\n";
        else cout << "B\n";
        
    }

    return 0;
}
*/