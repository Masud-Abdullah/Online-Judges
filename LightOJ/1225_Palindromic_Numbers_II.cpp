#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    for(int k=1;k<=t;k++){
        string s;
        cin>>s;
        bool f=true;
        for(i=0,j=s.size()-1;i<s.size()/2;i++,j--){
            if(s[i]!=s[j])
            {
                f=false;
                break;
            }
        }
        if(f)cout<<"Case "<<k<<": "<<"Yes"<<endl;
        else cout<<"Case "<<k<<": "<<"No"<<endl;
    }
    return 0;
}