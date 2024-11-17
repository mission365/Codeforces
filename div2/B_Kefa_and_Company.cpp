#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,d;
    cin>>n>>d;
    vector<pair<ll,ll>> vp;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    sort(vp.begin(), vp.end());
    // for(ll i=0;i<n;i++){
    //     cout<<vp[i].first<<" "<<vp[i].second<<endl;
    // }

    ll s = 0;
    ll e = 1;
    ll ans = vp[0].second;
    ll mx = ans;
    while(e<n){
        while(vp[e].first-vp[s].first >= d){
            ans -= vp[s].second;
            s++;
        }
        ans +=vp[e].second;
        mx = max(mx,ans);
        e++;
    }
    cout<<mx<<endl;
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