#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,one=0,two=0,three=0,four=0,tax=0;
    cin>>n;
    int s[n];

    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]==1)one++;
        else if(s[i]==2)two++;
        else if(s[i]==3)three++;
        else if(s[i]==4)four++;
    }

    tax+=four;

    if(one>three)
    {
        tax+=three;
        one=(one-three);
    }
    else
    {
        tax+=three;
        one=0;
    }

    if(two%2==0)
    {
        tax+=(two/2);
        two=0;
    }
    else
    {
        tax+=(two/2);
        two=2;
    }

    int remaining=one+two;

    if(remaining%4==0)tax+=(remaining/4);
    else tax+= (remaining/4)+1;

    cout<<tax<<endl;


//cout<<one<<endl<<two<<endl<<three<<endl<<four<<endl;
    return 0;
}





















/*#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,i,one=0,two=0,three=0,four=0,car;
    cin>>n;
    int s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        if(s[i]==1)one++;
        else if(s[i]==2)two++;
        else if(s[i]==3)three++;
        else if(s[i]==4)four++;
    }

    if(one==n)
    {
        if(one%2==0)
        {
            cout<<one/4<<endl;
            return 0;
        }else
        {
            cout<<(one/4)+1<<endl;
            return 0;
        }

    }
    else if(two==n)
    {
        if(two%2==0)
        {
            cout<<two/2<<endl;
            return 0;
        }else
        {
            cout<<(two/2)+1<<endl;
            return 0;
        }

    }
    else if(three==n)
    {
        if(three%2==0)
        {
            cout<<three<<endl;
            return 0;
        }
    }
    else if(n==4)
    {
        cout<<n<<endl;
        return 0;
    }


    car=four;
    if(one==three || one<three)
    {
        car+=three;
        one=0;
    }
    else
    {
        one=one-three;
        car+=three;
    }

    if(one>two )
    {
        if(one>two*2)
        {
            car+=two;
            one-=(two*2);
        }
        else
        {
            if(one%2==0)
            {
                car+=(one/2);
                two-=(one/2);
            }else
            {
                car+=((one/2)+1);
                two-=((one/2)+1);
            }

        }
    }
    else
    {
        if(one%2==0)
        {
            car+=(one/2);
            two-=(one/2);
        }
        else
        {
            car+=((one/2)+1);
            two-=((one/2)+1);
        }
    }

    if(two%2==0)car+=(two/2);
    else car+=((two/2)+1);

    cout<<car<<endl;



    return 0;
}
*/
/*car=four;
    if(one==three || one<three)car+=three;
    else
    {
        one=one-three;
        car+=three;
    }

    if(one>two)car+=one;
    else car+=two;*/


/*car=four;
if(one<=two)
{
    car+=two;
    one=0;
}
else
{
    car+=two;
    one-=(two*2);
}

    car+=three;*/
