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
        ll noelle, monaaaa, xiaoo;
        cin >> noelle >> monaaaa >> xiaoo;

        if (monaaaa <= xiaoo)
        {
            cout << "0\n";
        }

        else
        {
            ll arigato = (noelle * xiaoo) / (xiaoo + 1);
            cout << arigato << endl;
        }
    }
    return 0;
}
