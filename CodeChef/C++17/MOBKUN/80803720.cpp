#include <bits/stdc++.h>
// #ifdef LOCAL
// #define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
// #else
// #define dbg(...)
// #endif
// this code or template is made solely by me...
// not not not taken
// do not
#define amz fourrr
#define ll long long
#define ld long double
#define vll vector<ll>
#define vi vector<int>
#define vvll vector<vll>
#define wh(t) while (t--)
#define fi(n) for (ll i = 0; i < n; i++)
#define fj(n) for (ll j = 0; j < n; j++)
#define fu(i, a, e) for (ll i = a; i <= e; i++)
#define fd(i, a, e) for (ll i = a; i >= e; i--)
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vpll vector<pll>
#define fr first
#define se second
#define sll stack<ll>
#define qll queue<ll>
#define mll map<ll, ll>
using namespace std;
const ll INF = 1e9;
const ll M = 1e9 + 7;
const ll mod = 998244353;

ll monas = 1e18 + 1;
ll fact[500001];
ll powerPre[500001];
ll power(ll base, ll numos, ll mons)
{
    ll cult = 1;
    while (numos != 0)
    {
        if (numos % 2)
        {
            numos = numos - 1;
            cult = (cult * base) % mons;
        }
        else
        {
            numos = numos / 2;
            base = (base * base) % mons;
        }
    }
    return cult;
}

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

void preComputedFactorial()
{
    fact[0] = 1;
    ll c = 1;
    for (ll i = 1; i <= 500000; i++)
    {
        c = (c * i) % M;
        fact[i] = c;
        powerPre[i] = power(fact[i], M - 2, M);
    }
}
vll printDivisors(ll n)
{
    vll v;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                v.pb(i);
            else
            {
                v.pb(i), v.pb(n / i);
            }
        }
    }
    return v;
}
//

//
void funksolve()
{
    ll noelle, monna, kaeya, xiao;
    cin >> noelle >> monna >> kaeya >> xiao;
    ll temp = xiao;
    ll count = 0;
    // while(kaeya)
    // while (temp > 0)
    // {
    //     if (temp > kaeya)
    //     {
    //         count++;
    //         temp /= 2;
    //     }
    //     else
    //         break;
    // }
    // fi(count)
    // {
    //     if (noelle * kaeya + 1 == xiao)
    //     {
    //         cout << "yEs\n";
    //         return;
    //     }
    //     else
    //     {
    //         kaeya *= (i + 2);
    //     }
    // }
    if (xiao % ((noelle * kaeya) + monna))
    {
        if ((xiao % ((noelle * kaeya) + monna) <= (noelle * (kaeya - 1))))
        {
            cout << "nO\n";
            return;
        }
    }
    cout << "YeS\n";
    // while (noelle * kaeya + 1 <= xiao)
    // {
    //     if (noelle * kaeya + 1 == xiao)
    //     {
    //         cout << "yeS\n";
    //         return;
    //     }
    //     else
    //         kaeya *= 2;
    // }
    // cout << "nO\n";
}
// 110011
// 1010101
// 01000
//
int main()
{

    ll t;
    t = 1;
    cin >> t;
    wh(t)
    {
        funksolve();
    }
    // funksolve();
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}

// 1 2 3 4 5
// 7 0 4 0 4
// 1 2 0 1 2
// 8 3
// 8 24 3