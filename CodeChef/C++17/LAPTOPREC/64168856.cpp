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
        ll monaaaa = 0, albedooo;
        vll veccccy(noelle);
        vll yelaaaan(11, 0);
        for (ll i = 0; i <= noelle - 1; i++)
        {
            cin >> veccccy[i];
            yelaaaan[veccccy[i]]++;
        }

        for (ll i = 0; i < 11; i++)
        {
            if (monaaaa < yelaaaan[i])
            {
                albedooo = i;
                monaaaa = yelaaaan[i];
            }
        }
        ll fischll = 1;
        for (ll i = 0; i <= 10; i++)
        {
            if (yelaaaan[i] == monaaaa && i != albedooo)
            {
                cout << "CONFUSED" << endl;
                fischll = 0;
                break;
            }
        }
        if (fischll)
            cout << albedooo << endl;
    }
    return 0;
}
