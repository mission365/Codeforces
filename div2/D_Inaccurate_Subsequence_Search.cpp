#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    map<ll,ll> mp,mp2;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
        mp2[b[i]]++;
    }
    for(ll i=0;i<m;i++){
        mp[a[i]]++;
    }
    ll ans = 0, curr = 0;
    for(auto it: mp){
        curr += min(it.second,mp2[it.first]);
    }
    if(curr>=k)ans++;
    for(ll i=m;i<n;i++){
        int prev = min(mp[a[i-m]],mp2[a[i-m]]);
        mp[a[i-m]]--;
        int now = min(mp[a[i-m]],mp2[a[i-m]]);
        if(now>prev) curr++;
        else if(now<prev) curr--;
        prev = min(mp[a[i]], mp2[a[i]]);
        mp[a[i]]++;
        now = min(mp[a[i]],mp2[a[i]]);
        if(now>prev) curr++;
        else if(now<prev) curr--;
        if(curr>=k) ans++;
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