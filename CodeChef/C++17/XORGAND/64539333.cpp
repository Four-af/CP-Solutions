#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define ll long long

int solve(int a, int b)
{
    int x = (a - b) >> 1;
    if ((a ^ x) == b + x)
        return x;
    else
        return 0;
}

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noelle, qiqi;
        cin >> noelle;
        vll hutaooo(noelle);
        for (ll i = 0; i < noelle; i++)
        {
            cin >> hutaooo[i];
        }
        vector<vll> ddpp(noelle + 1, vll(33, 0));
        cin >> qiqi;

        ll ii = 1;
        while (ii < noelle + 1)
        {
            int powww = 0;
            while (powww < 33)
                ddpp[ii][powww] = ddpp[ii - 1][powww], powww++;
            int tartaggg = 32;
            if (hutaooo[ii - 1])
                tartaggg = floor(log2(hutaooo[ii - 1]));
            ddpp[ii][tartaggg]++;
            ii++;
        }

        for (ll i = 0; i < qiqi; i++)
        {
            ll lynnn, raiden, xiao;
            cin >> lynnn >> raiden >> xiao;
            ll beidou = 32;
            if (xiao)
                beidou = floor(log2(xiao));
            ll arigato = raiden - lynnn + 1;
            cout << arigato - (ddpp[raiden][beidou] - ddpp[lynnn - 1][beidou]) << "\n";
        }
    }
    return 0;
} //?0?11
