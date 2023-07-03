#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        long long w;
        cin >> w;
        cout << "Case " << i << ": ";
        if(w%2!=0)cout<<"Impossible"<<endl;
        else{
            long long even=1,odd=0;
            while(w%2==0){
                even*=2;
                odd=w/2;
                w/=2;
            }
            cout<<odd<<" "<<even<<endl;
        }
    }
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     for (int i = 1; i <= t; i++)
//     {
//         long long w;
//         cin >> w;

//         if (w % 2)
//             cout << "Case " << i << ": "
//                  << "Impossible" << endl;
//         else if ((w / 2) % 2 != 0)
//             cout << "Case " << i << ": " << w / 2 << " " << 2 << endl;
//         else if ((w / 4) % 2 != 0)
//             cout << "Case " << i << ": " << w / 4 << " " << 4 << endl;
//         else if ((w / 8) % 2 != 0)
//             cout << "Case " << i << ": " << w / 8 << " " << 8 << endl;
//         else
//             cout << "Case " << i << ": "
//                  << "Impossible" << endl;
//     }
//     return 0;
// }