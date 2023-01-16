#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define vch vector<char>
#define MMMM 1e9 + 7
//////////////////////////////////////////////////////

int sieve[1000001];
void createSieve()
{
    ll N = 2e5 + 1;
    for (ll i = 2; i <= N; i++)
        sieve[i] = 1;
    for (ll i = 2; i * i <= N; i++)
    {
        if (sieve[i] == 1)
        {
            for (ll j = i * i; j <= N; j += i)
                sieve[j] = 0;
        }
    }
}

ll DecimalToBinary(ll num)
{
    string str;
    ll count = 0;
    while (num)
    {
        if (num & 1) // 1
        {

            str += '1';
            count++;
        }
        else // 0
            str += '0';
        num >>= 1; // Right Shift by 1
    }
    return count;
}

// 3 1 2 4
// 3 1 2 2
//  4 3 2 1
// 2 1 3 4
//  2 1 2 2
//  4 1 2 3
// 4 1 2 3
// 4 1 3 2
//  5 1 4 2 3
//////////////////////////////////////////////
int main()
{

    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {

        ll noellleee, monaaaa;
        cin >> noellleee >> monaaaa;
        string hutaooo;
        cin >> hutaooo;
        ll euthymiaa = 0, onegaii = 0;

        for (ll i = 0; i < noellleee; i++)
        {
            if (hutaooo[i] == '1')
                onegaii++;
            else
                euthymiaa++;
        }
        if (euthymiaa == noellleee)
        {
            cout << monaaaa * noellleee << "\n";
        }
        else if (onegaii * monaaaa & 1)
        {
            cout << "0\n";
        }
        else if (monaaaa % 2 == 0)
        {
            ll arigato = 0, ehete = 0;
            for (ll i = 0; i < noellleee; i++)
            {
                if (hutaooo[i] == '1')
                    break;
                arigato++;
            }
            for (ll i = noellleee - 1; i >= 0; i--)
            {
                if (hutaooo[i] == '1')
                    break;
                arigato++;
            }
            cout << arigato + 1 << "\n";
        }
        else
        {
            ll ehete = 0;
            ll arigato = 0;
            for (ll i = 0; i < noellleee; i++)
            {
                if (hutaooo[i] == '1')
                    ehete++;
                if (ehete == onegaii / 2)
                    arigato++;
            }
            cout << arigato << "\n";
        }
    }
    return 0;
    // 0101101
    // 0100111
    //
}
