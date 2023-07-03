#include<iostream>
using namespace std;
int main()
{
    int k,n,w,i=1,d=0;
    cin>>k>>n>>w;

    while(w--)
    {
        d=d+(i*k);
        i++;
    }

    if(d>n)cout<<d-n<<endl;
    else cout<<0<<endl;

    return 0;
}
