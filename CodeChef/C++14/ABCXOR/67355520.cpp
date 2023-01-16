#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define amf Ffoouurr
#define vll vector<ll>
#define ll long long
#define pb push_back

ll prawns(ll num, ll power)
{
    ll res = 1;
    while (power--)
    {
        res *= num;
    }
    return res;
}

bool checkPalindrome(ll num)
{
    ll temp = num;
    ll rev = 0;
    while (temp != 0)
    {
        ll rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }
    return num == rev;
}

int main()
{
    ll testmeee;
    cin >> testmeee;
    for (ll kkk = 0; kkk < testmeee; kkk++)
    {

        ll noellee, kaeyaa;
        cin >> noellee >> kaeyaa;
        ll arigato = 1;
        for (ll i = 0; i <= noellee - 1; i++)
            arigato = arigato * 4;
        arigato = arigato - 3 * ((1 << noellee) - 1);
        cout << arigato - 1 << "\n";
    }
    // clock_t clockkk;
    return 0;
}

// 1001010110101
// 1110111
//
// 10
// 4
// 3
// 1
// 1
// 101010
// 01010
//  1010
//   010
//////10
///////0
// 101010
// 2+3+6+1
// 3
// 2
// 6
// 1
// 1 -1 1 -2 2 -1

// 01010101
// 1010 0101
// 0101 1010
// 101000101
// 1110001100
// 11 00 1 0
//  A AB A AB B AB AA AB AB BA BB BA BB
//  A BA B AB BA A BA B

// noellee/3-2 n/3 n/3 +2
// 1 2 3 4 -10 1 -1
// 1 1 1 1   2 1 -1
// 1 2 3 4 5 6
// 1 6 2 5 3 4
// 1 1111 1 111 1 11
// 1 2 3 4 -9 1 -2
// A A B A A BB A B A A ABABBABBBABB

// 5 6 1 2 3------6
// 6 1 2 3 4-----12

// 1 2 3 4 5-----14
// 2 1 4 5 6------18
// 3 2 1 6 7-----24
// 4 3 2 1 8-----32
// 5 4 3 2 1-----34

// 0011000
// 0101000
// 1010123