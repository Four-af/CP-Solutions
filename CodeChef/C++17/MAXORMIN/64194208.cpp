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
        }
        for (ll i = 0; i < noelle; i++)
        {

            if (hutaooo[i])
                onegai++;
            else
                euthymiaa++;
        }
        if (euthymiaa <= onegai)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
