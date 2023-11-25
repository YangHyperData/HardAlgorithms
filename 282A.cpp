
/* YangStone Come To Play */

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
void solve()
{
    // ll n;
    // cin >> n;
    // ll a[n + 1][n + 1] ;
    // vector<pair<int, int>> edge;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cin >> a[i][j];
    //     }
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if (a[i][j] && i < j)
    //         {
    //             edge.push_back({i, j});
    //         }
    //     }
    // }
    // for(auto x : edge){
    //     cout << x.first << " " << x.second << endl;
    // }
    // ll n, m;
    // cin >> n >> m;
    // ll a[n + 1][n + 1] = {0};
    // for (int i = 0; i < m; i++)
    // {
    //     ll x, y,c;
    //     cin >> x >> y;
    //     a[y][x] = a[x][y] = 1;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // ll n, m;
    // cin >> n >> m;
    // for (int i = 0; i < m; i++)
    // {
    //     ll x, y;
    //     cin >> x >> y;
    //     a[x].push_back(y);
    //     a[y].push_back(x);
    // }
    // memset(visited, false, sizeof(visited));
    // }
    // ll n, m;
    // cin >> n >> m;
    // vector<ll> a[n + 1];
    // for (int i = 0; i < m; i++)
    // {
    //     ll x, y;
    //     cin >> x >> y;
    //     a[x].push_back(y);
    //     a[y].push_back(x);
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << "->";
    //     int size = a[i].size();
    //     for (int j = 0; j < size; j++) {
    //         if (j == size - 1) {
    //             cout << a[i][j];
    //         } else {
    //             cout << a[i][j] << "->";
    //         }
    //     }
    //     cout << "|" << endl;
    // ll n,m;  cin>>n>>m;
    // for(int i=0;i<m;i++)
    // {
    //     ll x,y; cin>>x>>y;
    //     a[x].push_back(y);
    //     a[y].push_back(x);
    // }
    // ll z; cin>>z;
    // cout<<a[z].size();
    ll n, x = 0;
    cin >> n;

    string s;
    while (n--)
    {
        cin >> s;
        if (s[1] == '+')
        {
            ++x;
        }
        else
        {
            --x;
        }
    }

    cout << x << endl;
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
        // dfs(0);
        // cout << endl;
    }

    return 0;
}