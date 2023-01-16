#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

//////////////////////////////////////////////////////
ll minSwaps(vector<ll> hutaooo, ll mikoo)
{
    vector<ll> kokomii(hutaooo.begin(), hutaooo.end());
    sort(kokomii.begin(), kokomii.end());
    ll kleee = 0;
    for (ll i = 0; i < mikoo - 1; i++)
    {
        if (hutaooo[i] != hutaooo[i + 1] && hutaooo[i] > hutaooo[i + 1])
        {
            swap(hutaooo[i], hutaooo[i + 1]);
            if (hutaooo[i - 1] > hutaooo[i] && i >= 1)
            {
                kleee += 2;
            }
            else if ((hutaooo[i - 1] < hutaooo[i] && i >= 1) || i == 1)
            {
                kleee += 1;
            }

            else
                kleee++;
        }
        // else if (hutaooo[i] != kokomii[i] && kokomii[i + 1] <= kokomii[i])
        // {
        //     kleee++;
        //     swap(hutaooo[i], hutaooo[i + 1]);
        // }
    }
    return kleee;
} /////////////////////////////////////////////////////

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noellee;
        cin >> noellee;
        vll albedo(noellee);
        for (ll i = 0; i < noellee; i++)
        {
            cin >> albedo[i];
        }
        ll monaaaa = minSwaps(albedo, noellee);
        if (monaaaa >= 2)
            cout << "nO\n";
        else
            cout << "yEs\n";
    }
    return 0;
}
