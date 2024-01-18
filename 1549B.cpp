
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
#define dbg(x)         \
	cerr << #x << " "; \
	_print(x);         \
	cerr << endl;
#define pb push_back
#define bg begin()
#define ed end()
#define rbg rbegin()
#define red rend()
#define sz size()
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
// vector<int> factorize(int n)
// {
//     vector <int> res;
//     for (int i=2; i*i<=n; i++)
//         {
//         while (n%i==0)
//             {
//             res.push_back(i);
//             n/=i;
//         }
//     }
//     if (n!=1) res.push_back(n);
//     return res;
// }
// vector<int> factorize(int n)
// {
//     vector <int> res;
//     for (int i=2; i*i<=n; i++)
//         {
//         while (n%i==0)
//             {
//             res.push_back(i);
//             n/=i;
//         }
//     }
//     if (n!=1) res.push_back(n);
//     return res;
// }
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

void solve()
{
	int n;
	cin >> n;

	string r1, r2;
	cin >> r1 >> r2;

	int cnt1 = 0, cnt2 = 0;

	FOR(i, 0, n)
	{
		if (r1[i] == '1')
			++cnt1;
	}

	FOR(i, 0, n)
	{
		if (r2[i] == '1')
			++cnt2;
	}

	if (cnt1 == 0)
	{
		cout << cnt2;
		return;
	}
	else if (cnt2 == 0)
	{
		cout << 0;
		return;
	}

	int ans = 0;

	if (r2[0] == '1')
	{
		if (r1[0] == '0')
		{
			r1[0] = '*';
			++ans;
		}
		else if (r1[1] == '1')
		{
			r1[1] = '*';
			++ans;
		}
	}

	if (r2[n - 1] == '1')
	{
		if (r1[n - 1] == '0')
		{
			r1[n - 1] = '*';
			++ans;
		}
		else if (r1[n - 2] == '1')
		{
			r1[n - 2] = '*';
			++ans;
		}
	}

	FOR(i, 1, n - 1)
	{
		if (r2[i] == '1')
		{
			if (r1[i - 1] == '1')
			{
				r1[i - 1] = '*';
				++ans;
			}
			else if (r1[i] == '0')
			{
				r1[i] = '*';
				++ans;
			}
			else if (r1[i + 1] == '1')
			{
				r1[i + 1] = '*';
				++ans;
			}
		}
	}

	cout << ans;
}
int main()
{

	fast_out();
	int t = 1;
	cin >> t;
	wh(t--)
	{
		solve();

		cout << endl;
	}

	return 0;
}