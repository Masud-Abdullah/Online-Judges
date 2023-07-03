#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;

    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        if(n==8)cout<<"6"<<endl;
        else if(n==7)cout<<"18"<<endl;
        else if(n==6)cout<<"36"<<endl;
        else if(n==5)cout<<"60"<<endl;
        else if(n==4)cout<<"90"<<endl;
        else if(n==3)cout<<"126"<<endl;
        else if(n==2)cout<<"168"<<endl;
        else if(n==1)cout<<"216"<<endl;
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
        int n;
        cin>>n;
        int a[n],b[10];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k=0;
        for(int i=0;i<=9;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[j]==i)
                {
                    b[k]!=i;
                    k++;
                    break;
                }
            }
        }

        for(int i=0;i<k;i++)
        {
            cout<<b[i]<<" ";
        }
    }


    return 0;
}
*/
