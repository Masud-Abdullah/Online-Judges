#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;

        if(a1!=0)cout<<a1+(min(a2,a3)*2)+min(a1+1,abs(a2-a3)+a4)<<endl;
        else cout<<"1"<<endl;
    }

    return 0;
}














/*#include<bits/stdc++.h>
usi ng namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,a4;
        cin>>a1>>a2>>a3>>a4;

        if(a1>0 && (a2==0 &&a3==0 && a4==0))cout<<a1<<endl;
        else if(a4>0 && (a1==0 &&a2==0 && a3==0))cout<<"1"<<endl;
        else if(a2==0 && a3==0 && a1>0 && a4>0 &&a1<a4)cout<<a1+(a4-a1)<<endl;
        else if(a2==0 && a3==0 && a1>0 && a4>0 &&a1>a4)cout<<a1+a4<<endl;
        else{
           int x=0,y=0,cnt=0;
               cnt+=a1;
               x+=a1;
               y+=a1;

               cnt+=a2;
               x+=a2;
               y-=a2;

               cnt+=a3;
               x-=a3;
               y+=a3;

               cnt+=a4;
               x-=a4;
               y-=a4;

               //cout<<x<<endl;
               //cout<<y<<endl;
               cout<<cnt-abs(x+y)<<endl;
           //cout<<a2+a3<<endl;

        }

    }

    return 0;
}
*/
