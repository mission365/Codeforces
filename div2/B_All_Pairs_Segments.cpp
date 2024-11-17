#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n+1);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    map<ll,ll> mp;
    ll res = 0;
    for(ll i=1;i<=n;i++){
        res = i-1+(n-i) * i;
        mp[res]++;
    }
    for(ll i=1;i<n;i++){
        ll ans = 0;
        if(v[i+1]-v[i] >1){
            ans = (v[i+1]-v[i]-1);
            res = (n-i)*(i);
            mp[res]+=ans;
        }
    }
    for(ll i=0;i<k;i++){
        ll x;
        cin>>x;
        cout<<mp[x]<<" ";
    }
    cout<<endl;
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