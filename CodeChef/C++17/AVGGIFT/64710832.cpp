#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
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
        ll noellee, qiqi, lynnn, raiden;
        cin >> noellee >> qiqi;
        vll hutaooo(noellee);
        for (ll i = 0; i < noellee; i++)
        {
            cin >> hutaooo[i];
        }
        if (noellee == 1 && hutaooo[0] == qiqi)
            cout << "yEs\n";
        else
        {
            // sort(hutaooo.begin(), hutaooo.end());
            lynnn = *min_element(hutaooo.begin(), hutaooo.end());
            raiden = *max_element(hutaooo.begin(), hutaooo.end());
            if (lynnn > qiqi || raiden < qiqi)
                cout << "nO\n";
            else
                cout << "yEs\n";
        }

        // 2345521
        // 11 000 1111 00000 11111 00 1s
        // 4
        // time_req = clock() - time_req;
        // cout << "\n:: " << (float)time_req / CLOCKS_PER_SEC;
        // 11 000 0110 00000 11111 11 1
    } // n/n-4
    return 0;
}

// 5000*