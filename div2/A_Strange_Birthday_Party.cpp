#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n+1), b(m+1);
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(ll i=1;i<=m;i++){
        cin>>b[i];
    }
    ll p = 1;
    ll ans = 0;
    for(ll i=n; i>=1; i--){
        if(b[a[i]] > b[p]){
            ans += b[p];
            p++;
        }
        else {
            ans += b[a[i]];
        }
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