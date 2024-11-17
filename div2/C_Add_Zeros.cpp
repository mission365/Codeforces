#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b
ll n;
ll mx = 0;
map<ll,ll>vis;
map<ll,vector<ll>> mp;
map<ll,ll> dp;
ll check(ll need){
    mx = max(mx,need);
    if(vis[need] == 0){
        return 0;
    }
    if(dp[need]){
        return dp[need];
    }
    ll res = need;
    for(auto x: mp[need]){
        if(x!=0){
            res = max(res,check(need+x));
        }
    }
    return dp[need] = res;
}

void solve(){
    vis.clear();
    mp.clear();
    dp.clear();
    cin>>n;
    mx=n;
    ll a[n+10];
    
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    for(ll i=1;i<=n;i++){
        ll length = a[i]+i-1;
        mp[length].push_back(i-1);
        vis[length] = 1;
    }
    for(auto it: mp[n]){
        if(it!=0){
            check(it+n);
        }
    }
    cout<<mx<<endl;
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