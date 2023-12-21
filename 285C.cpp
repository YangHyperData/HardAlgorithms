
/* YangStone Come To Play */
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define MOD 1000000007
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
#define sp << " "
#define fr(i, l, r) for (int i = l; i <= r; i++)
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define fl(i, r, l) for (int i = r; i >= l; i--)
#define wh while
#define fat(x, a) for (auto &x : a)
#define srt(x) sort(x.bg, x.ed)
#define printall(a)       \
    for (auto &(i) : (a)) \
    cout << i << ' '
#define FOR(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define nlp(i, n) for (int i = 0; i < (int)(n); ++i)
#define rsrt(x) sort(x.rbg, x.red)
#define all(r) r.begin(), r.end()
#define vi vector<int>
#define rall(r) r.rbegin(), r.rend()
#define fast_out()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
const int mod = 1e9 + 7;
const int N = 100010;
const ll INF = 2e18 + 99;

int bin_pow(int a, int b, int mod)
{
    if (b == 0)
        return 1;
    int tmp = bin_pow(a, b / 2, mod);
    if ((b & 1) == false)
    {
        return (tmp * tmp) % mod;
    }
    return (a * (tmp * tmp) % mod) % mod;
}
//* Delete
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
bool compare(string &a, string &b)
{
    return a + b > b + a;
}
vector<ll> a[1001];
bool visited[1001];
bool check(int n, int m)
{
    if (n == m)
        return true;
    else if (n % 3 != 0 || n < m)
        return false;
    else
        return (check(n / 3, m) || check(2 * n / 3, m));
}
int totcount(string s, string t)
{
    int count = 0;
    int l = s.length();
    while (s.length() > 0 && t.length() > 0)
    {
        if (s.back() == t.back())
        {
            t.pop_back();
        }
        else
        {
            count++;
        }
        s.pop_back();
    }
    if (t.length() == 0)
    {
        return count;
    }
    return l;
}
void solve()
{
    int n, a[300000];
    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    sort(a, a + n);

    long long result(0);
    for (int i = 0; i < n; ++i)
    {
        result += abs(i + 1 - a[i]);
    }
    printf("%I64d", result);
}

void dfs(ll u)
{
    cout << u << " ";
    visited[u] = true;
    for (ll v : a[u])
    {
        if (!visited[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    fast_out();
    int t = 1;
    //cin >> t;
    wh(t--)
    {
        solve();

         cout << endl;
    }

    return 0;
}