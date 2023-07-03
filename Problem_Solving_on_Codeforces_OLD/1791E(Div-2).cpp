#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,sum1=0,sum2=0,sum=0,ans,cnt=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        //int max_indx= max_element(a,a+n)-a;
        int minn= min_element(a,a+n)-a;

        for(i=0;i<n;i++)
        {
            if(a[i]==a[minn])cnt++;
        }

        if(cnt==n)
        {
            ans=a[minn]*(-1)+a[minn+1]*(-1);
            sum=sum-(a[minn]+a[minn+1])+ans;
        }
        else if(minn==0)
        {
            ans=a[minn]*(-1)+a[minn+1]*(-1);
            sum=sum-(a[minn]+a[minn+1])-ans;

        }
        else if(minn==n-1)
        {
            ans=a[minn]*(-1)+a[minn-1]*(-1);
            sum=sum-(a[minn]+a[minn-1])+ans;
        }
        else
        {
            ans=max(a[minn]*(-1)+a[minn-1]*(-1) , a[minn]*(-1)+a[minn+1]*(-1));
            sum=sum-min(a[minn]+a[minn-1] , a[minn]+a[minn+1])+ans;
        }



        cout<<sum<<endl;




    }
    return 0;
}



/*int sum_2;
        for(i=0;i<n-1;i++)
        {
            sum_2=0;
            sum_2+=(a[i]+a[i+1]);
            a[i]*=(-1);
            a[i+1]*=(-1);
            sum+=a[i]+a[i+1]-sum_2;

            a[i]*=(-1);
            a[i+1]*=(-1);

            if(sum>maxx)
            {
                maxx=sum;
            }
            else
            {
                sum=(sum+sum_2)-((a[i]*(-1))+(a[i+1]*(-1)));
            }


        }
*/









