#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    cin>>x5>>y5>>x6>>y6;

    if(x3<=x1 && y3<=y1 && x4>=x2 && y4>=y2)cout<<"NO"<<endl;
    else if(x5<=x1 && y5<=y1 && x6>=x2 && y6>=y2)cout<<"NO"<<endl;
    else if(x3<=x1 && y3<=y1 && x4<=x2 && y4>=y2 && x5<=x4 && y5<=y4 && x6>=x2 && y6>=y2 && y5<=y1)cout<<"NO"<<endl;
    else if(x3<=x1 && y3>=y1 && x4>=x2 && y4>=y2 && x5<=x1 && y5<=y1 && x6>=x2 && y6>=y3)cout<<"NO"<<endl;
    else if(x5<=x1 && y5<=y1 && x6<=x2 && y6>=y2 && x3<=x6 && y3<=y6 && x4>=x2 && y4>=y2)cout<<"NO"<<endl;
    else if(x5<=x1 && y5>=y1 && x6>=x2 && y6>=y2 && x3<=x1 && y3<=y1 && x4>=x2 && y4>=y5)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;



    return 0;
}
