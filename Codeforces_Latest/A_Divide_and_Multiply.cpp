#include<bits/stdc++.h>
#define ull unsigned long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0;
        cin>>n;
        vector<ull>a(n);
        for(int i=0;i<a.size();i++)
        {
            cin>>a[i];
            while(a[i]%2==0)
            {
                a[i]/=2;
                k++;
            }
        }
        sort(a.begin(),a.end());
        ull sum=0;
        for(int i=0;i<k;i++)
        {
            a[n-1]*=2;
        }
        for(int i=0;i<n;i++)sum+=a[i];

        cout<<sum<<'\n';
    }
    return 0;
}


// #include<bits/stdc++.h>
// #define ull unsigned long long
// using namespace std;
// ull even(ull x,ull y)
// {
//     if(x==16) return ((((y*2)*2)*2)*2);
//     else if(x==14) return (y*2);
//     else if(x==12) return ((y*2)*2);
//     else if(x==10) return (y*2);
//     else if(x==8) return (((y*2)*2)*2);
//     else if(x==6) return (y*2);
//     else if(x==4) return ((y*2)*2);
//     else if(x==2) return (y*2);
// }
// ull index(ull x)
// {
//     if(x==16) return 1;
//     else if(x==14) return 7;
//     else if(x==12) return 3;
//     else if(x==10) return 5;
//     else if(x==8) return 1;
//     else if(x==6) return 3;
//     else if(x==4) return 1;
//     else if(x==2) return 1;
// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         ull n,ev=0,od=0,od_mx=0,ev_mx=0;
//         long long initial_sum=0,indx=-1,indx2=-1;
//         cin>>n;
//         ull a[n],b[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//             initial_sum+=a[i];

//             if(a[i]%2!=0)
//             {
//                 if(a[i]>od_mx)
//                 {
//                     indx=i;
//                     od_mx=a[i];
//                 }
//                 //od_mx=max(od_mx,a[i]);
//             }
//             else 
//             {
//                 if(a[i]>ev_mx)
//                 {
//                     indx2=i;
//                     ev_mx=a[i];
//                 }
//             }

//             if(a[i]%2)od++;
//             else ev++;
//         }

//         for(int i=0;i<n;i++)
//         {
//             b[i]=a[i];
//         }

//         //cout<<initial_sum<<" "<<od_mx<<" "<<od<<" "<<ev<<" "<<indx<<'\n';
        

//         if(ev==0 || (od==1 && od_mx==1))cout<<initial_sum<<'\n';
//         else if(od==0)
//         {
//             sort(a,a+n);
//             for(int i=0;i<n-1;i++)
//             {
//                 a[n-1]=(even(a[i],a[n-1]));
//                 a[i]=index(a[i]);
//                 // for(int i=0;i<n;i++)cout<<a[i]<<" ";
//                 // cout<<endl;
//             }
            
//             ull ans=0;
//              for(int i=0;i<n;i++)ans+=a[i];
//            // cout<<endl;
//         //    if(initial_sum>ans)cout<<initial_sum<<'\n';
//         //    else 
//         cout<<ans<<'\n';
//         }
//         else
//         {
//             for(int i=0;i<n;i++)
//             {
//                 if(a[i]%2==0 && i!=indx)
//                 {
//                     a[indx]=(even(a[i],a[indx]));
//                     a[i]=index(a[i]);
//                 }
                
//                 if(b[i]%2==0 && i!=indx2)
//                 {
//                     b[indx2]=(even(b[i],b[indx2]));
//                     b[i]=index(b[i]);
//                 }
//                 // for(int i=0;i<n;i++)cout<<a[i]<<" ";
//                 // cout<<endl;
//             }
//             ull ans=0,ans2=0;
//             for(int i=0;i<n;i++)ans+=a[i];

//             for(int i=0;i<n;i++)ans2+=b[i];

//              if(initial_sum>=ans && initial_sum>=ans2)cout<<initial_sum<<'\n';
//              else if(ans2>=ans && ans2>=initial_sum)cout<<ans2<<'\n';
//              else cout<<ans<<'\n';
//         }


//     }
//     return 0;
// }