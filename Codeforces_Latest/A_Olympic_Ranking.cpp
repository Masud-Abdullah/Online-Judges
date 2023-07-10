#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int gold[n], silver[n], bronze[n];
    string state[n];

    for (int i = 0; i < n; i++)
    {
        cin >> gold[i] >> silver[i] >> bronze[i];
        cin.ignore();
        getline(cin, state[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (gold[i] < gold[j])
            {
                swap(gold[i], gold[j]);
                swap(silver[i], silver[j]);
                swap(bronze[i], bronze[j]);
                swap(state[i], state[j]);
            }
            else if (gold[i] == gold[j])
            {
                if (silver[i] < silver[j])
                {
                    swap(gold[i], gold[j]);
                    swap(silver[i], silver[j]);
                    swap(bronze[i], bronze[j]);
                    swap(state[i], state[j]);
                }
                else if (silver[i] == silver[j])
                {
                    if (bronze[i] < bronze[j])
                    {
                        swap(gold[i], gold[j]);
                        swap(silver[i], silver[j]);
                        swap(bronze[i], bronze[j]);
                        swap(state[i], state[j]);
                    }
                }
            }
        }
    }

    cout << state[0] << endl;

    // for(int i=0;i<n;i++)
    // {
    //     cout<<gold[i]<<" "<<silver[i]<<" "<<bronze[i]<<" "<<state[i]<<endl;
    // }
    return 0;
}
