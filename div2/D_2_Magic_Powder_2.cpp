#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

bool check(ll mid, ll n, ll k, vector<ll> v, vector<ll> v2){
    ll ans = 0;
    for(ll i=0; i<n; i++){
        ans += max(v[i]*mid-v2[i], 0ll);
        if(ans>k) return false;
    }
    if(k>= ans) return true;
    else return false;
}

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n), v2(n);
    for(ll i=0;i<n; i++) cin>>v[i];
    for(ll i=0;i<n; i++) cin>>v2[i];

    ll l = 0, h = 2e9+7;
    ll ans = 0;
    while(l<=h){
        ll mid = (l+h)/2;
        if(check(mid,n,k,v,v2)){
            ans = max(ans,mid);
            l = mid+1;
        }
        else h = mid-1;
    }
    cout<<ans<<endl;
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