#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define vch vector<char>
#define MMMM 1e9 + 7
//////////////////////////////////////////////////////

vll idk_this_was_ambig(ll X, ll Y)
{
    ll B = 2, A = B ^ X, C = B ^ Y;
    vll arrrr(3), hu(3, -1);
    arrrr[0] = (A), arrrr[1] = (B), arrrr[2] = (C);
    for (ll i = 0; i < 3; i++)
        arrrr[i] = arrrr[i] % 2;
    ll top = 0;
    for (ll i = 0; i < 3; i++)
    {
        if (arrrr[i] == 0)
            top++;
    }
    if (top == 1)
    {
        hu[0] = (A), hu[1] = (B), hu[2] = (C);
    }
    return hu;
}

vll the_case_of_one_odd(ll X, ll Y)
{
    ll A = 2, B = 2 ^ X, C = B ^ Y, top = 0;
    vll arrrr(3), hu(3, -1);
    arrrr[0] = (A), arrrr[1] = (B), arrrr[2] = (C);
    for (ll i = 0; i < 3; i++)
        arrrr[i] %= 2;
    for (ll i = 0; i < 3; i++)
    {
        if (arrrr[i] == 0)
            top++;
    }
    if (top == 1)
    {
        hu[0] = 2, hu[1] = min(B, C), hu[2] = max(B, C);
    }
    return hu;
}

vll have_2_eves(ll X, ll Y)
{
    ll C = 2, B = C ^ Y, A = X ^ B, top = 0;
    vll arrrr(3), hu(3, -1);
    arrrr[0] = (A), arrrr[1] = (B), arrrr[2] = (C);
    for (ll i = 0; i < 3; i++)
        arrrr[i] = arrrr[i] % 2;

    for (ll i = 0; i < 3; i++)
    {
        if (arrrr[i] == 0)
            top++;
    }
    if (top == 1)
    {
        hu[0] = (A), hu[1] = (B), hu[2] = (C);
    }
    return hu;
}

//////////////////////////////////////////////
int main()
{

    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {

        // clock_t time_req = clock();
        ll xiaoooo, yelann;
        cin >> xiaoooo >> yelann;
        vll arigato = the_case_of_one_odd(xiaoooo, yelann);
        if (arigato[0] != -1)
        {
            sort(arigato.begin(), arigato.end());
            for (ll i = 0; i < 3; i++)
                cout << arigato[i] << " ";
            cout << "\n";
        }
        else
        {
            arigato = idk_this_was_ambig(xiaoooo, yelann);
            if (arigato[0] != -1)
            {
                sort(arigato.begin(), arigato.end());
                for (ll i = 0; i < 3; i++)
                    cout << arigato[i] << " ";
                cout << "\n";
            }
            else
            {
                arigato = have_2_eves(xiaoooo, yelann);
                if (arigato[0] != -1)
                {
                    sort(arigato.begin(), arigato.end());
                    for (ll i = 0; i < 3; i++)
                        cout << arigato[i] << " ";
                    cout << "\n";
                }
            }
        }

        // albedo[0] = 2 ^ eveee;
        // ^ (xiaooo == odddddddd ? yelan : xiaooo);

        // albedo[2] = albedo[1] + albedo[0];
        // sort(albedo.begin(), albedo.end());
        // for (ll i = 0; i < 3; i++)
        // {
        //     cout << albedo[i] << " ";
        // }
        // cout << "\n";
        // time_req = clock() - time_req;
        // cout << "\noelleee:: " << (float)time_req / CLOCKS_PER_SEC;
    }
    return 0;
    // 0101101
    // 0100111
    //
}
