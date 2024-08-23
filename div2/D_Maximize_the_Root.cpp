#include<bits/stdc++.h>
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

const ll N = 1e5+10;
bool vis[N];
vector<ll> g[N];

ll dfs(ll node, ll val[], vector<ll>adj[]){
    ll ans = val[node-1];
    ll mn = INT_MAX;
    if(adj[node].size()==0) return ans;
    for(auto it: adj[node]){
        mn = min(mn, dfs(it, val, adj));
    }
    if(node==1){
        ans += mn;
        return ans;
    }
    if(mn < ans) return mn;
    ans = (ans+mn)/2;
    return ans;
}

void solve(){
    ll n;
    cin>>n;

    vector<ll> adj[n+1];
    ll val[n];

    for(ll i=0; i<n; i++){
        cin>>val[i];
    }
    for(ll i=2; i<=n; i++){
        ll x;
        cin>>x;
        adj[x].push_back(i);
    }
    ll ans = dfs(1,val, adj);
    cout<<ans<<endl;
}

int main() {
    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
    //solve();
    return 0;
}