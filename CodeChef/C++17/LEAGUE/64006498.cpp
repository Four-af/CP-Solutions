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
        ll monaaa = (noellee - 1) * 3;
        ll diluccc = ((noellee - 1) / 2) * 3;
        cout << (monaaa - diluccc) << endl;
    }
    return 0;
}
