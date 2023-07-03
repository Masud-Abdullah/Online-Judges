#include<iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while(test--){

        int a[2][2], i, j;

        for(i=0; i<2; i++){
            for(j=0; j<2; j++){
                cin >> a[i][j];
            }
        }

        if(a[0][0]<a[0][1] && a[1][0]<a[1][1] && a[0][0]<a[1][0] && a[0][1]<a[1][1]){
            cout << "YES" << endl;
        }
        else if(a[0][0]<a[0][1] && a[1][0]<a[1][1] && a[0][0]>a[1][0] && a[0][1]>a[1][1]){
            cout << "YES" << endl;
        }
        else if(a[0][0]>a[0][1] && a[1][0]>a[1][1] && a[0][0]<a[1][0] && a[0][1]<a[1][1]){
            cout << "YES" << endl;
        }
        else if(a[0][0]>a[0][1] && a[1][0]>a[1][1] && a[0][0]>a[1][0] && a[0][1]>a[1][1]){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}

