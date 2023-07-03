#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,cnt_1=0,cnt_2=0,cnt_3=0;
    cin>>n;
    int t[n];
    for(i=0; i<n; i++)
    {
        cin>>t[i];
        if(t[i]==1)cnt_1++;
        else if(t[i]==2)cnt_2++;
        else if(t[i]==3)cnt_3++;
    }

    int one[cnt_1],two[cnt_2],three[cnt_3],x=0,y=0,z=0;

    for(i=0; i<n; i++)
    {
        if(t[i]==1)
        {
            one[x]=i+1;;
            x++;
        }
        else if(t[i]==2)
        {
            two[y]=i+1;
            y++;
        }
        else if(t[i]==3)
        {
            three[z]=i+1;
            z++;
        }
    }

    //sort(t,t+n);

    int w=min({cnt_1,cnt_2,cnt_3});


    if(w==0)cout<<w<<endl;
    else
    {
        cout<<w<<endl;

        for(i=0; i<w; i++)
        {
            cout<<one[i]<<" "<<two[i]<<" "<<three[i]<<endl;
        }

    }





    return 0;
}

