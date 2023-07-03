#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,flag=0,sum1=0,sum2=0;
    cin>>n;
    char str[100];
    cin>>str;
    for(i=0;i<n;i++)
    {
        if(str[i]-48!=4 && str[i]-48!=7)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)cout<<"NO"<<endl;
    else
    {
        for(i=0,j=n/2;i<n/2,j<n;i++,j++)
        {
            sum1+=str[i];
            sum2+=str[j];
        }
        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}















/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num,i,sum1=0,sum2=0,flag=0,rem,num1;
    cin>>n;
    cin>>num;
    num1=num;

    for(i=1;i<=n;i++)
    {
        rem=num%10;
        if(rem!=4 && rem!=7)
        {
            flag=1;
            break;
        }
        num/=10;
    }
    if(flag==1)cout<<"NO"<<endl;
    else if(flag==0)
    {
        for(i=1;i<=n/2;i++)
        {
            sum1+=num1%10;
            num1/=10;
        }
        for(i=n/2+1;i<=n;i++)
        {
            sum2+=num1%10;
            num1/=10;
        }
        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


    return 0;
}*/

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,flag=0,sum1=0,sum2=0;
    cin>>n;
    int num[n];
    for(i=0; i<n; i++)
    {
        cin>>num[i];
    }
    for(i=0; i<n; i++)
    {
        if(num[i]!=4 && num[i]!=7)
            flag=1;
            break;
    }

    if(flag==1)cout<<"NO"<<endl;
    else
    {
        for(i=0;i<n/2;i++)
        {
            sum1+=num[i];
        }
        for(i=n/2;i<n;i++)
        {
            sum2+=num[i];
        }
        if(sum1==sum2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}
*/
