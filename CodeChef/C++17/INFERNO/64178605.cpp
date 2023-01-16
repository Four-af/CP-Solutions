#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noelle, xiaoo;
        cin >> noelle >> xiaoo;
        vll hutaoo(noelle);
        for (ll i = 0; i < noelle; i++)
        {
            cin >> hutaoo[i];
        }
        ll maxxxu = *max_element(hutaoo.begin(), hutaoo.end());
        ll arigatooo = 0;
        for (ll i = 0; i < noelle; i++)
        {
            if (hutaoo[i] <= xiaoo)
                arigatooo++;
            else if ((hutaoo[i] % xiaoo) && hutaoo[i] > xiaoo)
            {
                arigatooo += (hutaoo[i] / xiaoo) + 1;
            }
            else if (hutaoo[i] > xiaoo && hutaoo[i] % xiaoo == 0)
            {
                arigatooo += hutaoo[i] / xiaoo;
            }
        }
        cout << min(arigatooo, maxxxu) << endl;
    }
    return 0;
}
