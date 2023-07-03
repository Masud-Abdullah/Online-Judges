#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, tm, on, tw;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == n)
                tm = i + 1;

            if (a[i] == 1)
                on = i + 1;

            if (a[i] == 2)
                tw = i + 1;
        }

        if (on + 1 == tw && tm > tw)
            cout << tw << " " << tm << endl;
        else if (on + 1 == tw && tm < on)
            cout << on << " " << tm << endl;
        else if (on - 1 == tw && tm > on)
            cout << tm << " " << on << endl;
        else if (on - 1 == tw && tm < tw)
            cout << tm << " " << tw << endl;
        else if (on < tw)
            cout << on + 1 << " " << tm << endl;
        else if (on > tw)
            cout << on - 1 << " " << tm << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n; cin>>n;
//         int a[n];
//         for(int i=0;i<n;i++)cin>>a[i];

//         if((a[0]==1 || a[0]==2)&&(a[n-1]==1 || a[n-1]==2))
//         {
//             cout<<1<<" "<<1<<endl;
//         }
//         else if((a[0]==1 && a[n-1]!=2)||(a[0]==2 && a[n-1]!=1))
//         {
//             if(a[0]==1 && a[n-1]!=2)
//             {
//                 int tm;
//                 for(int i=1;i<n;i++)
//                 {
//                     if(a[i]==2)
//                     {
//                         tm=i+1;
//                         break;
//                     }
//                 }
//                 cout<<tm<<" "<<n<<endl;
//             }
//             else if(a[0]==2 && a[n-1]!=1)
//             {
//                  int tm;
//                 for(int i=1;i<n;i++)
//                 {
//                     if(a[i]==1)
//                     {
//                         tm=i+1;
//                         break;
//                     }
//                 }
//                 cout<<tm<<" "<<n<<endl;
//             }
//         }
//         else
//         {
//             int on,tw;
//             for(int i=0;i<n;i++)
//             {
//                 if(a[i]==1)on=i+1;
//                 else if(a[i]==2)tw=i+1;
//             }

//             if(n%2!=0)
//             {

//             }
//             else if((on<n/2 && tw>n/2)||(on>n/2 && tw<n/2))
//             {
//                 if(on>n-tw)cout<<1<<" "<<on<<endl;
//                 else cout<<tw<<" "<<n<<endl;
//             }
//             else if((on>n/2 && tw>=n/2)||(on>=n/2 && tw>n/2))
//             {
//                 cout<<1<<" "<<max(on,tw)<<endl;
//             }
//             else
//             {
//                 cout<<min(on,tw)<<" "<<n<<endl;
//             }
//         }
//     }
//     return 0;
// }