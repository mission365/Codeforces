#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

// ll mod = (ll)1e9 + 7;
// ll max(ll a, ll b) {return a > b ? a : b;}
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
void solve(){
    ll m,s;
    cin>>m>>s;
    if(s==0){
        if(m==1){
            cout<<0<<" "<<0<<endl;
            return;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
            return;
        }
    }
    string mn,mx;
    for(ll i=0;i<m;i++){
        ll k = min(9,s);
        mx.push_back(k+'0');
        s-=k;
    }
    if(s>0){
        cout<<"-1 -1"<<endl;
        return;
    }
    for(ll i=m-1; i>=0;i--){
        mn.push_back(mx[i]);
    }
    // if(mn[0]=='0'){
    //     mn[0]++;
    //     mn[1]--;
    // }
    ll j =0;
    while(mn[j]=='0') j++;
    mn[0]++;
    mn[j]--;
    cout<<mn<<" "<<mx<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll t;
    // cin>>t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}