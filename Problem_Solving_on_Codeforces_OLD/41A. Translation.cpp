#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
       char str1[101],str2[101];
       cin>>str1>>str2;

       strrev(str1);
       int res=strcmp(str1,str2);

       if(res==0)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    return 0;
}
