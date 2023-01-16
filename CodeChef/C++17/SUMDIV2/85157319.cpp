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
#define fu(i, s, e) for (ll i = s; i <= e; i++)
#define fd(i, s, e) for (ll i = s; i >= e; i--)
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
const ll M = 1e9 + 7;
const ll NUM = 1e18;

// ll monas = 1e18 + 1;
ll power(ll base, ll numos, ll mons)
{
    ll result = 1;
    while (numos != 0)
    {
        if (numos % 2)
        {
            numos = numos - 1;
            result = (result * base) % mons;
        }
        else
        {
            numos = numos / 2;
            base = (base * base) % mons;
        }
    }
    return result;
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

void funksolve()
{
    ll x, y;
    cin >> x >> y;
    if (x < y)
        swap(x, y);
    if (x < 1e5)
    {
        ll k = x;
        ll i(NUM / k);
        k = x * i;
        while (k >= 0)
        {
            ll N = k - y;
            if (N > 0)
            {
                ll op = N + x;
                if ((op % y) == 0)
                {
                    cout << N << "\n";
                    return;
                }
            }
            i--;
            k = x * i;
        }
    }
    ll xy = x * y;
    cout << abs(xy - (x + y)) << "\n";

    // ll lcm = __gcd(x, y);
    // ll i(1);
    // ll gg = lcm;
    // while (gg <= NUM)
    // {
    //     ll sx = gg - x;
    //     ll sy = gg - y;
    //     if (sx == y && sy == x)
    //     {
    //         cout << gg << "\n";
    //         return;
    //     }
    //     i++;
    //     gg = lcm * i;
    // lcm*=i;
    // }
}

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