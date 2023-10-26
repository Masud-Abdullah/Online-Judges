#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    string s="muwtfss";
	    for(int i=1;i<=2000;i++)
	    {
	        string x="muwtfss";
	        s+=x;
	    }
	    int cnt=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='u')cnt++;
	    }
	    cout<<cnt<<'\n';
	}
	return 0;
}