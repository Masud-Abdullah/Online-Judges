#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,lenA=0,lenB=0;
        string a,b;
        cin>>a>>b;

        for(i=0;i<a.size();i++)
        {
            lenA++;
        }
        for(i=0;i<b.size();i++)
        {
            lenB++;
        }

        if(a==b)cout<<"="<<endl;
        else if(a[a.size()-1]=='S' && b[b.size()-1]=='S' && lenA>lenB)cout<<"<"<<endl;
        else if(a[a.size()-1]=='S' && b[b.size()-1]=='S' && lenA<lenB)cout<<">"<<endl;
        else if(a[a.size()-1]=='L' && b[b.size()-1]=='L' && lenA>lenB)cout<<">"<<endl;
        else if(a[a.size()-1]=='L' && b[b.size()-1]=='L' && lenA<lenB)cout<<"<"<<endl;
        else if(a[a.size()-1]=='L' && b[b.size()-1]=='M')cout<<">"<<endl;
        else if(b[b.size()-1]=='L' && a[a.size()-1]=='M')cout<<"<"<<endl;
        else if(a[a.size()-1]=='S' && (b[b.size()-1]=='M' ||  b[b.size()-1]=='L'))cout<<"<"<<endl;
        else if(b[b.size()-1]=='S' && (a[a.size()-1]=='M' ||  a[a.size()-1]=='L'))cout<<">"<<endl;

    }

    return 0;
}
