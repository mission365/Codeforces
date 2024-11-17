#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,a,b;
    cin>>n>>a>>b;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll c = __gcd(a,b);
    for(ll i=0;i<n;i++){
        v[i]%=c;
    }
    // for(ll i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    sort(v.begin(),v.end());
    ll ans = v[n-1]-v[0];
    // cout<<ans<<endl;
    for(ll i=0;i<n-1;i++){
        ans = min(ans, v[i]+c-v[i+1]);
        // cout<<ans<<endl;
    }
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