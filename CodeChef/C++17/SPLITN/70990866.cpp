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
//////////////////////////////////////////////
int main()
{

    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {
        ll noelle;
        cin >> noelle;
        cout << DecimalToBinary(noelle) - 1 << "\n";
    }
    return 0;
    // 0101101
    // 0100111
    //
}
