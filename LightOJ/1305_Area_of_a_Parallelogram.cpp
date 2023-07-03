#include<bits/stdc++.h>
typedef long long  ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int ax,ay,bx,by,cx,cy;
        cin>>ax>>ay>>bx>>by>>cx>>cy;

        int xx=(cx-abs(bx-ax));
        int xy=cy;
        int area=abs(bx-ax)*abs(cy-by);
        cout<<xx<<" "<<xy<<" "<<area<<endl;

    }      
    return 0;
}