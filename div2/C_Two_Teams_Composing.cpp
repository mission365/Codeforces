#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    unordered_map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    ll mx = 0;
    for(auto it: mp){
        mx = max(mx,it.second);
    }
    ll distval = mp.size();
    ll ans = min(mx,distval);
    if(distval == mx){
        cout<<mx-1<<endl;
        return;
    }
    ans = min(ans,n/2);
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