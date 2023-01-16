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
    ll n;
    cin >> n;
    vll a(n);
    ll z(0);
    fi(n)
    {
        cin >> a[i];
        // if (a[i] == 0)
        // z = 1;
    }
    ll xora = a[0];
    fu(i, 1, n - 1)
    {
        xora ^= a[i];
        // if (xora == 1)
        // {
        //     z = 1;
        // }
    }
    if ((!(n & 1)) && (xora))
        cout << "NO\n";
    else
        cout << "YES\n";
    // cout << xora << " || \n";
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
