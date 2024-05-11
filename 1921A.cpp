
/* YangStone Come To Play */
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
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
#define RFOR(i, a, b) for (int(i) = (a) - 1; (i) >= (b); --(i))
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
const ll INF = 1e9 + 7;

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
bool cmp(ll l, ll r)
{
	return l > r;
}
void build(int l, int r, vector<int> const &a, vector<int> &d, int curD = 0)
{
	if (r < l)
	{
		return;
	}
	if (l == r)
	{
		d[l] = curD;
		return;
	}
	int m = l;
	for (int i = l + 1; i <= r; i++)
	{
		if (a[m] < a[i])
		{
			m = i;
		}
	}
	d[m] = curD;
	build(l, m - 1, a, d, curD + 1);
	build(m + 1, r, a, d, curD + 1);
}
void solve()
{
	ll x1, x2, x3, x4, y1, y2, y3, y4;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

	ll area = 1;

	if (x1 == x2)
	{
		area = area * abs(y2 - y1);
	}
	else if (x1 == x3)
	{
		area = area * abs(y3 - y1);
	}
	else if (x1 == x4)
	{
		area = area * abs(y4 - y1);
	}
	else if (x2 == x3)
	{
		area *= abs(y3 - y2);
	}
	else if (x2 == x4)
	{
		area *= abs(y4 - y2);
	}
	else if (x3 == x4)
	{
		area *= abs(y4 - y3);
	}

	if (y1 == y2)
	{
		area = area * abs(x2 - x1);
	}
	else if (y1 == y3)
	{
		area = area * abs(x3 - x1);
	}
	else if (y1 == y4)
	{
		area = area * abs(x4 - x1);
	}
	else if (y2 == y3)
	{
		area *= abs(x3 - x2);
	}
	else if (y2 == y4)
	{
		area *= abs(x4 - x2);
	}
	else if (y3 == y4)
	{
		area *= abs(x4 - x3);
	}

	cout << area << endl;
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