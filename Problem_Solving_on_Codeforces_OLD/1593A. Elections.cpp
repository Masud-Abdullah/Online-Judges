#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>c;
        int maxx=max({a,b,c});

        if(a==b&&b==c)
            cout<<"1"<<" "<<"1"<<" "<<"1"<<endl;
        else if(a>b&&a>c)
        cout<<"0"<<" "<<maxx-b+1<<" "<<maxx-c+1<<endl;
        else if(b>a&&b>c)
        cout<<maxx-a+1<<" "<<"0"<<" "<<maxx-c+1<<endl;
        else if(c>a&&c>b)
        cout<<maxx-a+1<<" "<<maxx-b+1<<" "<<"0"<<endl;
        else if(maxx==a && maxx==b)
        cout<<"1"<<" "<<"1"<<" "<<maxx-c+1<<endl;
        else if(maxx==a && maxx==c)
        cout<<"1"<<" "<<maxx-b+1<<" "<<"1"<<endl;
        else if(maxx==b && maxx==c)
        cout<<maxx-a+1<<" "<<"1"<<" "<<"1"<<endl;
    }


    return 0;
}















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[3],maxx,n,i;
    cin>>t;

    while(t--)
    {
            cin>>arr[0]>>arr[1]>>arr[2];

        if(arr[0]>arr[1] && arr[0]>arr[2])
        {
            maxx=arr[0];
            n=0;
        }
        else if(arr[1]>arr[0] && arr[1]>arr[2])
        {
            maxx=arr[1];
            n=1;
        }
        else if(arr[2]>arr[0] && arr[2]>arr[1])
        {
            maxx=arr[2];
             n=2;
        }
        else if(arr[0]==arr[1] && arr[0]==arr[2])n=10;



        if(n==10)cout<<1<<" "<<1<<" "<<1<<endl;
        else {
            for(i=0;i<3;i++)
        {
           if(i==n)cout<<0<<" ";
            else cout<<(maxx+1)-arr[i]<<" ";
        }
        cout<<endl;
        }
    }

    return 0;
}
*/
