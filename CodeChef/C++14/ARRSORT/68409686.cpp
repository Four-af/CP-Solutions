#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define amz fourrr
#define vll vector<long long>
#define ll long long
ll k = 10000;
#define pb push_back

int main()
{

    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noelleee;
        cin >> noelleee;
        vll hutaooo(noelleee);

        for (ll i = 0; i < noelleee; i++)
        {
            cin >> hutaooo[i];
        }

        ll arigato = -2;
        for (ll i = 0; i < noelleee; i++)
        {
            if (arigato == -2)
                arigato = abs(hutaooo[i] - 1 - i);
            else
                arigato = __gcd(arigato, abs(hutaooo[i] - 1 - i));
        }
        cout << arigato << "\n";
    }

    return 0;
}
// 3 6 8 13 15 15
// 3 4 4 4 4
// 3 3 4 4 4 5 5
// 2 1 4 5 3 7 6
// 3 3 4 4 4
// 2 1 5 3 4
// 5 5
// a a a b b b c c c
// abcabcbacba
//