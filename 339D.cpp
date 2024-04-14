
/* YangStone Come To Play */
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

#define RFOR(i, a, b) for (int(i) = (a)-1; (i) >= (b); --(i))
#define nl << '\n'
#define vti vector<int>
#define vtll vector<long long>
#define yep cout << "YES" nl
#define nope cout << "NO" nl
#define ll long long
#define lg long
#define db double
#define MOD 1000000007
#define dbg(x)         \
	cerr << #x << " "; \
	_print(x);         \
	cerr << endl;
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define dbg(x...)        \
	cerr << #x << " : "; \
	_print(x)
#define uceil(a, b) ((a + b - 1) / (b))
#define dbg(...)
#define RFOR(i, a, b) for (int(i) = (a)-1; (i) >= (b); --(i))
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

// void file() {freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);}
int bin_pow(int a, int b, int mod) // luy thua nhi phan
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

vector<int> factorize(int n)
{
	vector<int> res;
	for (int i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			res.push_back(i);
			n /= i;
		}
	}
	if (n != 1)
		res.push_back(n);
	return res;
}
//* Delete
/*var a = document.querySelectorAll(".MJX_Assistive_MathML")
a.forEach(s=> s.remove())
*/
bool compare(string &a, string &b)
{
	return a + b > b + a;
}
bool isPerfectSquare(ll n)
{
	ll temp = sqrt(n);

	if (temp * temp == n)
		return true;
	return false;
}
bool check(char r)
{
	return (r == 'a' || r == 'e');
}
bool isPerfectSquare(int n)
{
	int rt = sqrt(n);
	return (rt * rt == n);
}
bool isPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}

	return true;
}
ll func(ll n)
{
	ll sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
ll a[4 * N], nd[4 * N], tree[4 * N];
ll build(ll nd, ll l, ll r, ll chk)
{
	if (l == r)
	{
		tree[nd] = a[l];
		return 0;
	}

	ll left = 2 * nd;
	ll right = left + 1;

	ll mid = (l + r) / 2;

	build(left, l, mid, chk - 1);
	build(right, mid + 1, r, chk - 1);

	if (chk % 2)
		tree[nd] = tree[left] | tree[right];
	else
		tree[nd] = tree[left] ^ tree[right];
}
void update(ll nd, ll l, ll r, ll x, ll new_val, ll chk)
{
	if (l > x or r < x)
		return;
	if (l == x and r == x)
	{
		tree[nd] = new_val;
		return;
	}

	ll left = 2 * nd;
	ll right = left + 1;

	ll mid = (l + r) / 2;

	update(left, l, mid, x, new_val, chk - 1);
	update(right, mid + 1, r, x, new_val, chk - 1);

	if (chk % 2)
		tree[nd] = tree[left] | tree[right];
	else
		tree[nd] = tree[left] ^ tree[right];
}
void solve()
{
	ll t;
	ll m, n, b, c, d, i, j, k, x, y, z, l, q, r;

	ll cnt = 0, ans = 0, sum = 0;
	cin >> n >> q;
	ll lim = 1 << n;

	for (ll i = 1; i <= lim; i++)
		cin >> a[i];

	build(1, 1, lim, n);
	while (q--)
	{
		cin >> x >> y;
		update(1, 1, lim, x, y, n);
		ans = tree[1];
		cout << ans << endl;
	}
}
int main()
{

	fast_out();
	int t = 1;
	// cin >> t;
	wh(t--)
	{
		solve();
		// cout << endl;
	}

	return 0;
}