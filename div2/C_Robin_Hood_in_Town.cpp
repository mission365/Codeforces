#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b
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


bool check(ll mid, ll sum, vector<ll> a){
    ll n = a.size();
    ll total = mid+sum;
    ll avg = ceil(total,n);
    avg= (avg+1)/2;
    ll cnt = 0;
    for(ll i=0;i<n;i++){
        if(avg>a[i]) cnt++;
    }
    return cnt > n/2;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum = 0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.begin(),a.end());

    if(n<3){
        cout<<-1<<endl;
        return;
    }

    ll l = 0;
    ll h = 1e12;
    ll res = -1;
    while(l<=h){
        ll mid = l+(h-l)/2;
        if(check(mid, sum, a)){
            res = mid;
            h = mid-1;
        }
        else {
            l = mid+1;
        }
    }
    cout<<res<<endl;

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