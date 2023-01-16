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
        ll noelllee, albedooo, beidouuu, arigatooooooo = 0, fiscll = true;
        cin >> noelllee >> albedooo >> beidouuu;

        for (ll i = noelllee - 1; i >= 0; i--)
        {
            if (((1 << i) & albedooo) == 0 && ((1 << i) & beidouuu) == 0)
                arigatooooooo |= (1 << i);
            else if (((1 << i) & albedooo) > 0 && ((1 << i) & beidouuu) > 0)
            {
            }
            else if (fiscll)
            {
                if (((1 << i) & albedooo) == 0 && ((1 << i) & beidouuu) > 0)
                    fiscll = false;
                else
                {
                    arigatooooooo |= (1 << i);
                    fiscll = false;
                }
            }
            else if (((1 << i) & albedooo) == 0 && ((1 << i) & beidouuu) > 0)
                arigatooooooo |= (1 << i);
        }
        cout << arigatooooooo << "\n";

        // if (noellee >= qiqi ||)

        // 2345521
        // 11 000 1111 00000 11111 00 1s
        // 4
        // time_req = clock() - time_req;
        // cout << "\noelleee:: " << (float)time_req / CLOCKS_PER_SEC;
        // 11 000 0110 00000 11111 11 1
    } // noelleee/noelleee-4
    return 0;
}

// 5000*