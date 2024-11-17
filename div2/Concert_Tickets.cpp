#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,m;
    cin>>n>>m;
    ll a[n];
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    while(m--){
        ll x;
        cin>>x;
        ll val;
        if(mp.find(x) != mp.end()){
            mp[x] -= 1;
            cout<<x<<endl;
        }
        else{
            for(ll i=0;i<n;i++){
            if()
        }
        }
        
    }
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