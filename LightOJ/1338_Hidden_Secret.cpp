#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
     cin.ignore();
    for (int i = 1; i <= t; i++)
    {
        int cnt1=0,cnt2=0;
        cout << "Case " << i << ": ";
       
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);

        for(int j=0;j<s1.size();j++){
            if(s1[j]>='A' && s1[j]<='Z')
            {
                s1[j]=tolower(s1[j]);
            }

            if(s1[j]>='a' && s1[j]<='z')cnt1++;
        }

       
         for(int j=0;j<s2.size();j++){
            if(s2[j]>='A' && s2[j]<='Z')
            {
                s2[j]=tolower(s2[j]);
            }

            if(s2[j]>='a' && s2[j]<='z')cnt2++;
        }
    //     cout<<s1<<endl<<s2<<endl;
    //   cout<<cnt1<<" "<<cnt2<<endl;
       
        int a[26] = {0}, b[26] = {0};
        for (int j = 0; j < s1.size(); j++)
        {
            if (s1[j] != ' ')
                a[s1[j] - 97]++;

        }

        for(int j=0;j<s2.size();j++){
            if (s2[j] != ' ')
                b[s2[j] - 97]++;
        }
        bool f=true;
        for(int k=0;k<26;k++){
            if(a[k]!=b[k])
            {
                f=false;
                break;
            }
        }

        if(cnt1!=cnt2)cout<<"No"<<endl;
        else if(f)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

        // for(int j=0;j<26;j++)cout<<a[j]<<" ";

        // cout<<endl;
        // for(int j=0;j<26;j++)cout<<b[j]<<" ";

        // cout<<endl;
        
    }
    return 0;
}