
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
map<ll, char> mp1;
map<char, ll> mp2;

void call()
{
	ll i;
	char c;
	mp1[0] = 'Z';
	for (i = 1, c = 'A'; i <= 25; i++, c++)
		mp1[i] = c;
	for (i = 1, c = 'A'; c <= 'Z'; i++, c++)
		mp2[c] = i;
}

string row, col, col1, s;
ll id, i, col2;

void frm1()
{
	for (i = 1; s[i] != 'C'; i++)
		row += s[i];
	for (ll j = i + 1; j < s.size(); j++)
		col += s[j];
	
}
string solve1()
{

	ll num, k;
	stringstream ss(col);
	ss >> num;

	while (num)
	{
		k = num % 26;
		col1 += mp1[k];
		if (k == 0)
		{
			num = (num / 26) - 1;
		}
		else
			num /= 26;
	}
	reverse(col1.begin(), col1.end());
	return col1;
}

void frm2()
{
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] >= 'A' && s[i] <= 'Z'))
			col += s[i];
		else
			row += s[i];
	}
}
ll solve2()
{
	ll k;
	col2 = mp2[s[0]];
	for (int i = 1; i <= col.size() - 1; i++)
	{
		k = col2 * 26;
		col2 = k + mp2[s[i]];
	}
	return col2;
}
void solve()
{
	ll m, n, t;

	ll cnt = 0, ans = 0;

	call();
	cin >> n;
	while (n--)
	{
		col.clear(), col1.clear(), row.clear();
		ll sol = 0;
		cin >> s;

		if (s[0] == 'R' && (s[1] >= '1' && s[1] <= '9'))
		{
			sol = 0;
			for (int i = 0; i < s.size(); i++)
			{
				if (s[i] == 'C')
				{
					sol = 1;
					break;
				}
			}
		}

		
		if (sol == 1)
		{
			frm1();
			solve1();
			cout << col1 << row << endl;
		}
		else
		{
			frm2();
			solve2();
			cout << "R" << row << "C" << col2 << endl;
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

		// cout << endl;
	}

	return 0;
}