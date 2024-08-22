#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// ll mod = (ll)1e9 + 7;
ll max(ll a, ll b) {return a > b ? a : b;}
ll min(ll a, ll b) {return a > b ? b : a;}
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

ll getAns(ll x, ll y, string &s, map<string, vector<ll>> &mp){

    ll ans = 1e7;
    
    ll ind = lower_bound(mp[s].begin(), mp[s].end(), x) - mp[s].begin();
    
    ll sz = mp[s].size();
    for(int i = max(ind - 1, 0); i < min(ind+1, sz); i++){
        ll exactlocation = mp[s][i];
        if(exactlocation <= y && exactlocation >= x){
            ans = min(ans, y-x);
        }
        else {
            ll totaldist = abs(x-exactlocation) + abs(y-exactlocation);
            ans = min(ans, totaldist);
        }
    }
    return ans;
}

void solve(){
    ll n, q;
    cin>>n>>q;
    vector<string> v;
    map<string, vector<ll>> mp;
    for(ll i=0; i<n;i++){
        string s;
        cin>>s;
        v.push_back(s);
        mp[s].push_back(i);
    }
    while(q--){
        ll x, y;
        cin>>x>>y;
        x--;
        y--;

        if(x > y){
            swap(x,y);
        }
        if(v[x][0] == v[y][0] || v[x][0] == v[y][1] || v[x][1] == v[y][0] || v[x][1] == v[y][1]) {
            cout<<(y-x)<<endl;
            continue;
        }
        ll ans = 1e7;

        for(ll i=0;i<v[x].size();i++){
            for(ll j=0; j<v[y].size(); j++){
                string s = "";
                s.push_back(v[x][i]);
                s.push_back(v[y][j]);
                sort(s.begin(), s.end());
                ans = min(ans, getAns(x, y, s, mp));
            }
        }

        if(ans <= 1e6){
            cout<<ans<<endl;
            continue;
        }
        else {
            cout<<-1<<endl;
            continue;
        }
        
    }
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