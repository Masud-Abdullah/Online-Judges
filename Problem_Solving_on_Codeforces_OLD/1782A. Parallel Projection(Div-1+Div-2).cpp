#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int w,d,h;
        cin>>w>>d>>h;
        int a,b,f,g;
        cin>>a>>b>>f>>g;

        int dis1,dis2,dis3,dis4,Len1,Len2,LEN;

        dis1=h+a+f+abs(g-b);
        dis2=h+abs(w-a)+abs(w-f)+abs(b-g);
        dis3=h+abs(d-b)+abs(f-a)+abs(d-g);
        dis4=h+b+abs(f-a)+g;

        Len1= min(dis1,dis2);
        Len2=min(dis3,dis4);
        LEN=min(Len1,Len2);

        cout<<LEN<<endl;





    }

    return 0;
}


/*if(a>f && b>g )
        {
            len=h+(a-f)+b+g;
        }
        else if(a<f && b>g)
        {
            len=h+(f-a)+f;
        }
        else if(a<f && b>g)len=h+(f-a)+(d-b)+(d-g);
        cout<<len<<endl;*/
