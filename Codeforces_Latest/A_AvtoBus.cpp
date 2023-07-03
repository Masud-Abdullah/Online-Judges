// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         long long n;
//         cin>>n;
//         if(n%2!=0 || n<4)cout<<-1<<endl;
//         else if(n==4)cout<<1<<" "<<1<<endl;
//         else if(n==6)cout<<1<<" "<<1<<endl;
//         else if(n==8)cout<<2<<" "<<2<<endl;
//         else if(n==10)cout<<2<<" "<<2<<endl;
//         else
//         {
//             if(n%6==0 && n%4==0)
//             {
//                 cout<<n/6<<" "<<n/4<<endl;
//             }
//             else{
//                 if(n%6!=0 && n%4!=0)
//                 {
//                     cout<<(n/6)+1<<" "<<n/4<<endl;
//                 }
//                 else if(n%6!=0 )
//                 {
//                     cout<<(n/6+1)<<" "<<n/4<<endl;
//                 }
//                 else if(n%4!=0)
//                 {8
//                     cout<<(n/6)<<" "<<(n/4)<<endl;
//                 }
//             }
//         }
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        long long n;
        cin>>n;
        if(n<4 || n%2)
        {
            cout<<-1<<endl;
            continue;
        }
        long long maxi=n/4;
        long long mini=(n+5)/6;

        cout<<mini<<" "<<maxi<<endl;

    }
    return 0;
}
