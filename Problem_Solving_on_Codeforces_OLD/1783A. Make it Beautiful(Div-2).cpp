#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];

        sort(arr,arr+n);
        reverse(arr,arr+n);

        int max_cnt=1,maxx=arr[0];

        for(i=1;i<n;i++)
        {
            if(arr[i]==maxx)max_cnt++;
            else break;
        }

        if(max_cnt==n)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(i=max_cnt-1;i<n;i++)cout<<arr[i]<<" ";
            for(i=0;i<max_cnt-1;i++)cout<<arr[i]<<" "<<endl;
            cout<<endl;
        }
    }

    return 0;
}


























/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n,i,j,flag=0,sum=0,temp,sum1=0,sum2=0,indx,flag2=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==sum)
            {
                indx=i;
                flag=1;
                break;
            }
            sum+=arr[i];
        }
        if(flag==0)
        {
            cout<<"YES"<<endl; //beautiful
            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        else if(flag==1) //ugly
        {
            int flag2=0;
            temp=arr[indx];
            arr[indx]=arr[indx+1];
            arr[indx+1]=temp;
            for(i=0;i<indx+1;i++)
            {
                sum1+=arr[i];
                if(sum1==arr[i])
                {
                    flag2=1;
                    break;
                }
            }

            if(flag==1)
                    cout<<"NO"<<endl;
                else//(sum1!=arr[indx])
                {
                    cout<<"YES"<<endl;
                    for(i=0;i<n;i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                    flag2=1;
                }
               // else if(sum1==arr[indx])
                   // cout<<"NO"<<endl;
            //}
           /* else if(flag2==0)
            {
                cout<<"NO"<<endl;
               /* for(i=0;i<n;i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }*/
/*
        }
}

    return 0;
}

*/

            /*for(i=0;i<n;i++)
            {
                for(j=1;j<n;j++)
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    if(arr[i]==sum1)
                    sum1+=arr[i];
                }
                sum2+=arr
            }*/
