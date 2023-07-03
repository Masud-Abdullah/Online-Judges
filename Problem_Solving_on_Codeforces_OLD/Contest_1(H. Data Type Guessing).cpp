
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,k,a;
    cin >> n >> k >> a;
    double result =  (n*k)/a;
    long long mYnum = result;
    double mYres = result - mYnum;
    if (mYres > 0 && mYres == (double)n*k/a)
    {
        cout << "double" << endl;
    }
    else if (mYnum > 2147483647)
    {
        cout << "long long" << endl;
    }
    else
       cout << "int" << endl;
}



/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,k,a,ans;
    long long utt;
    double result,decide;
    cin>>n>>k>>a;

    result= (((double)n*k)/a);
    ans= (int)result;
    utt=(long long)result;
    decide=(double)result-ans;

    if(decide==0 && (ans>= -2147483648 && ans<=2147483648))cout<<"int"<<endl;
    else if(decide==0 && utt>2147483648)cout<<"long long"<<endl;
    else if(decide>0 && decide<1)cout<<"double"<<endl;


    return 0;
}
*/
