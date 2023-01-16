#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define plll pair<ll, ll>, ll
#define ll long long

ll dfs(vector<vector<ll>> &grid, ll i, ll j, ll m, ll n)
{
    if (i < 0 || j < 0 || i >= m || j >= n)
    {
        return 0;
    }

    ll somee = grid[i][j];
    somee += dfs(grid, i - 1, j - 1, m, n) + dfs(grid, i + 1, j + 1, m, n);
    return (1 + dfs(grid, i + 1, j, m, n) + dfs(grid, i - 1, j, m, n) + dfs(grid, i, j + 1, m, n) + dfs(grid, i, j - 1, m, n));
}

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noelle;
        cin >> noelle;
        vll albedoo(noelle), beidou(noelle);

        for (ll i = 0; i < noelle; i++)
        {
            cin >> albedoo[i];
        }

        for (ll i = 0; i < noelle; i++)
        {
            cin >> beidou[i];
        }

        // set<pair<ll, ll>> s;

        // for (ll i = 0; i < albedoo.size() - 1; i++)
        // {
        //     ll j = i;
        //     while (j < noelle)
        //     {
        //         if (albedoo[i] == beidou[j])
        //         {
        //             // makes pairs of even numbers
        //             pair<ll, ll> x = make_pair(albedoo[i], beidou[j]);

        //             // inserts into the set
        //             s.insert(x);
        //         }
        //         j++;
        //     }

        //     // check for even number
        // }
        // cout << s.size() << "\n";

        map<plll> magistus;
        ll Eiiiiii = 0ll;
        for (ll i = 0; i < noelle; i++)
        {
            // magistus.insert(make_pair(make_pair(albedoo[i], beidou[i]), i));
            Eiiiiii = Eiiiiii + magistus[{beidou[i], albedoo[i]}];
            magistus[{albedoo[i], beidou[i]}]++;
        }
        cout << Eiiiiii << '\n';
    }
    return 0;
} //?0?11
