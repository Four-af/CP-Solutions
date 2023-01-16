#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vch vector<char>

//////////////////////////////////////////////////////
//////////////////////////////////////////////
int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {

        // clock_t time_req = clock();
        ll noellee;
        cin >> noellee;
        vll hutaooo(noellee);
        for (ll i = 0; i < noellee; i++)
        {
            cin >> hutaooo[i];
        }
        if (noellee == 1)
            cout << hutaooo[0] << "\n";
        else
        {
            sort(hutaooo.begin(), hutaooo.end(), greater<ll>());
            ll magistus = 0, carpyy = 0;
            for (ll i = 0; i <= noellee - 2; i++)
            {
                if (hutaooo[i] != hutaooo[i + 1])
                {
                    magistus = max(magistus, hutaooo[i] + carpyy);
                    carpyy = 0;
                }
                else
                {
                    carpyy++;
                }
            }
            cout << magistus << "\n";
        }

        // 2345521
        // 11 000 1111 00000 11111 00 1
        // 4
        // time_req = clock() - time_req;
        // cout << "\n:: " << (float)time_req / CLOCKS_PER_SEC;
        // 11 000 0110 00000 11111 11 1
    } // n/n-4
    return 0;
}

// 5000*