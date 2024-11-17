#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll mod = (ll)1e9 + 7;
ll add(ll a, ll b) { return (a % mod + b % mod) % mod; }
ll sub(ll a, ll b) { return ((a % mod - b % mod) + mod) % mod; }
ll mul(ll a, ll b) { return (a % mod * b % mod) % mod; }

ll pow(ll a, ll b) {a %= mod;ll res = 1;while (b > 0) {if ((b & 1) != 0)res = mul(res, a);a = mul(a, a);b /= 2;}return res;}

ll inv(ll x) {return pow(x, mod - 2);}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll s = 0, m = 0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        s = add(a[i],s);
    }
    // cout<<s<<endl;
    for(ll i=0;i<n;i++){
        m = add(m, mul(sub(s,a[i]), a[i]));
    }
    ll d = mul(n, n - 1);
    ll ans = mul(m, inv(d));
    cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin>>t;
    while(t--) {
        solve();
    }
    //solve();
    return 0;
}