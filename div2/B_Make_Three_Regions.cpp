#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// ll mod = (ll)1e9 + 7;
// ll max(ll a, ll b) {return a > b ? a : b;}
// ll min(ll a, ll b) {return a > b ? b : a;}
// ll abs(ll a) {if (a < 0) return (-1 * a);return a;}
// ll gcd(ll a, ll b) {if (b == 0)return a;return gcd(b, a % b);}
// ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}
// ll add(ll a, ll b) {return (((a + mod) % mod + (b + mod) % mod) % mod);}
// ll sub(ll a, ll b) {return (((a + mod) % mod + ((-b) + mod) % mod) % mod);}
// ll mul(ll a, ll b) {return ((a % mod * b % mod) % mod);}
// ll inv(ll x) {return pow(x, mod - 2);}
// ll div(ll x, ll y) {return mul(x, inv(y));}
// ll pow(ll a, ll b) {a %= mod;ll res = 1;while (b > 0) {if ((b & 1) != 0)res = mul(res, a);a = mul(a, a);b /= 2;}return res;}
// ll sqrt(ll x) {ll start = 0, end = (ll) 3e9, ans = 1; while (start <= end) {ll mid = (start + end) / 2; if (mid * mid <= x) {ans = mid;start = mid + 1;} else end = mid - 1;} return ans;}

const ll N = 1e5 + 10;
bool vis[N];
vector<ll> g[N];

void solve()
{
    ll n;
    cin >> n;
    char arr[2][n];
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll cnt = 0;
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 1; j < n-1; j++)
        {
            if(i==0){
                if(arr[i][j]=='.' && arr[i+1][j-1] == 'x' && arr[i+1][j+1]=='x' && arr[i+1][j]=='.' && arr[i][j-1]=='.' && arr[i][j+1]=='.'){
                    cnt++;
                }
            }
            else if(i==1){
                if(arr[i][j]=='.' && arr[i-1][j-1] == 'x' && arr[i-1][j+1]=='x' && arr[i-1][j]=='.' && arr[i][j-1]=='.' && arr[i][j+1]=='.'){
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}