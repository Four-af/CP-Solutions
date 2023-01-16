#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define vch vector<char>
#define MMMM 1e9 + 7
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
        string hutaoo;
        cin >> hutaoo;
        ll crapppp = 0;
        for (ll i = 0; i < noellee - 1; i++)
        {
            if (hutaoo[i] == '1' && hutaoo[i + 1] == '0')
            {
                crapppp++;
            }
            else
                continue;
        }
        cout << crapppp << "\n";

        // time_req = clock() - time_req;
        // cout << "\noelleee:: " << (float)time_req / CLOCKS_PER_SEC;
    }
    return 0;
    // 0101101
    // 0100111
    //
}
