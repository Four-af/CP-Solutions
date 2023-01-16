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
        ll noelle;
        cin >> noelle;
        vll hutaooo(noelle);
        ll onegai = 0, euthymiaa = 0;
        for (ll i = 0; i < noelle; i++)
        {
            cin >> hutaooo[i];
            euthymiaa += hutaooo[i];
        }
        ll kawaai = euthymiaa - noelle / 2;
        // ll raiden = euthymiaa % noelle;

        if (noelle == 2)
            cout
                << "yEs\n";
        else
        {
            if (kawaai % noelle)
                cout << "nO\n";
            else
                cout << "yEs\n";
        }
    }
    return 0;
}
