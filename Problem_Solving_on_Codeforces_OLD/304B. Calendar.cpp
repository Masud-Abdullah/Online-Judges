#include<bits/stdc++.h>
#define   nl         "\n"
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    string s,str;
    cin>>s>>str;

    ll year1,month1,day1,i,ans=0,cnt1=0,cnt2=0;
    year1= (s[0]-48)*1000+(s[1]-48)*100+(s[2]-48)*10+(s[3]-48)*1;
    month1=(s[5]-48)*10+(s[6]-48)*1;
    day1=(s[8]-48)*10+(s[9]-48)*1;

    ll year2,month2,day2;
    year2= (str[0]-48)*1000+(str[1]-48)*100+(str[2]-48)*10+(str[3]-48)*1;
    month2=(str[5]-48)*10+(str[6]-48)*1;
    day2=(str[8]-48)*10+(str[9]-48)*1;

    if(year1>year2)
    {
        ll x=year1;
        year1=year2;
        year2=x;

        ll y=month1;
        month1=month2;
        month2=y;

        ll z=day1;
        day1=day2;
        day2=z;
    }
    else if(year1==year2 && month1!=month2)
    {
        if(month1>month2)
        {
            ll y=month1;
            month1=month2;
            month2=y;

            ll z=day1;
            day1=day2;
            day2=z;
        }
    }
    else if(year1==year2 && month1==month2)
    {
        cout<<abs(day1-day2)<<nl;
        return 0;
    }
    else if(year1==year2 && month1==month2 && day1==day2)
    {
        cout<<0<<nl;
        return 0;
    }



    if(year1!=year2)
    {
        for(i=year1; i<year2; i++)
        {
            if(i%400==0)ans+=366;
            else if(i%100==0)ans+=365;
            else if(i%4==0)ans+=366;
            else ans+=365;
        }
    }


    //cout<<ans<<nl;

    if(month1==1)cnt1+=day1;
    else
    {
        for(i=1; i<month1; i++)
        {
            if(i==1 || i==3 || i== 5 || i==7 || i==8 || i== 10 || i==12)cnt1+=31;
            else if(i==4 || i==6 || i==9 || i==11)cnt1+=30;
            else
            {
                if(year1%400==0)cnt1+=29;
                else if(year1%100==0)cnt1+=28;
                else if(year1%4==0)cnt1+=29;
                else cnt1+=28;
            }
        }
        cnt1+=day1;
    }


    if(month2==1)cnt2+=day2;
    else
    {
        for(i=1; i<month2; i++)
        {
            if(i==1 || i==3 || i== 5 || i==7 || i==8 || i== 10 || i==12)cnt2+=31;
            else if(i==4 || i==6 || i==9 || i==11)cnt2+=30;
            else
            {
                if(year2%400==0)cnt2+=29;
                else if(year2%100==0)cnt2+=28;
                else if(year2%4==0)cnt2+=29;
                else cnt2+=28;
            }
        }
        cnt2+=day2;
    }

    ans=(ans-cnt1)+cnt2;
    cout<<ans<<nl;

    //cout<<year1<<" "<<month1<<" "<<day1<<nl;
    //cout<<year2<<" "<<month2<<" "<<day2<<nl;

    return 0;
}


