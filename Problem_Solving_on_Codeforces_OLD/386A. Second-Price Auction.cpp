#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], i, j, temp, position;

    for(i=0; i<n; i++){
        cin >> a[i];
    }

    int maxx = a[0];
    position = 1;

    for(i=1; i<n; i++){
        if(a[i] > maxx){
            maxx = a[i];
            position = i+1;
        }
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(a[j]<a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    int maxx2 = a[n-2];

    cout << position << " " << maxx2;

    return 0;
}




/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int p[n];

    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }

    int maxx,sec_max,pos;

    if(p[0]>p[1])
    {
        maxx=p[0];
        pos=1;
        sec_max=p[1];
    }
    else if(p[0]<p[1])
    {
        maxx=p[1];
        pos=2;
        sec_max=p[0];
    }

    for(i=2;i<n;i++)
    {
        if(p[i]>maxx)
        {
            sec_max=maxx;
            maxx=p[i];
            pos=i+1;
        }
        else if(p[i]<maxx && p[i]>sec_max)sec_max=p[i];
    }

    cout<<pos<<" "<<sec_max<<endl;

    return 0;
}*/
