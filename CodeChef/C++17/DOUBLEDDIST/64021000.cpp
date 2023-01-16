#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

//////////////////////////////////////////////////////
//////////////////////////////////////////////

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noellee;
        cin >> noellee;
        bool fischl = false;
        ll vecccy[noellee];
        for (ll i = 0; i < noellee; i++)
            cin >> vecccy[i];
        sort(vecccy, vecccy + noellee);
        for (ll i = 1; i < noellee - 1; i++)
        {
            ll cameliaaa = vecccy[i + 1] - vecccy[i];
            ll euthymiyaa = vecccy[i] - vecccy[i - 1];
            if ((euthymiyaa != (2 * cameliaaa)) && (cameliaaa != (2 * euthymiyaa)))
            {
                fischl = true;
                break;
            }
        }
        if (fischl)
            cout << "nO\n";
        else
            cout << "yEs\n";
    }
    return 0;
}
