#include <bits/stdc++.h>
#ifdef LOCAL
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif
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
// 6 5 4 3 2 6 7
// 1 2 3 4 5 6 7//a c b o

void funksolve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string t = "";
    t = t + s[0];
    s = s.substr(1, n - 1);
    n--;

    while (n != 0)
    {
        if (s[n - 1] == '1')
            t = '1' + t;
        else
            t = t + '0';
        s = s.substr(0, n - 1);
        n--;
        if (n == 0)
            break;
        if (s[0] == '0')
            t = '0' + t;
        else
            t = t + '1';
        s = s.substr(1, n - 1);
        n--;
    }
    cout << t << "\n";
}

// 3 4 1 2 6 5
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
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
    return 0;
}