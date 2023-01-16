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
        ll noelllee;
        cin >> noelllee;
        string hutaoo;
        cin >> hutaoo;
        ll fcount = 0, tcount = 0;
        vector<char> sucrose(noelllee, '%');
        bool fiscl = false;
        reverse(hutaoo.begin(), hutaoo.end());
        for (ll i = 0; i < noelllee; i++)
        {
            if ((hutaoo[i] == 'a' || hutaoo[i] == 'e' || hutaoo[i] == 'i' || hutaoo[i] == 'o' || hutaoo[i] == 'u'))
            {
                if (fiscl == false)
                {
                    sucrose[fcount] = hutaoo[i];
                    fcount++;
                    fiscl = true;
                    // {
                    //     sucrose[noelllee - i] = hutaoo[i];
                    // }
                }
                else if (fiscl == true)
                {
                    tcount++;
                    sucrose[noelllee - tcount] = hutaoo[i];
                    fiscl = false;
                }
            }

            else
            {
                if (fiscl == false)
                {
                    sucrose[fcount] = hutaoo[i];
                    fcount++;

                    // cout << "--||--";
                }
                else if (fiscl == true)
                {
                    tcount++;
                    sucrose[noelllee - tcount] = hutaoo[i];
                }
            }
        }
        reverse(sucrose.begin(), sucrose.end());
        for (ll i = 0; i < noelllee; i++)
        {
            cout << sucrose[i];
        }

        cout << "\n";
        // bcadage
        // egd
        //  albedo[0] = 2 ^ eveee;
        //  ^ (xiaooo == odddddddd ? yelan : xiaooo);

        // albedo[2] = albedo[1] + albedo[0];
        // sort(albedo.begin(), albedo.end());
        // for (ll i = 0; i < 3; i++)
        // {
        //     cout << albedo[i] << " ";
        // }
        // cout << "\noelllee";
        // time_req = clock() - time_req;
        // cout << "\noelleee:: " << (float)time_req / CLOCKS_PER_SEC;
    }
    return 0;
    // 0101101
    // 0100111
    //
}
// abcdefghij
// jidcbaefgh

// abcdefghij
// abcdefghij
// jiabcdeghf