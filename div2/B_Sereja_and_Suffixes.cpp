#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> v(n+1);
    set<ll> s;
    for(ll i=1;i<=n;i++){
        cin>>v[i];
    }
    for(ll i=n;i>0;i--){
        s.insert(v[i]);
        v[i] = s.size();
    }
    for(ll i=1;i<=m;i++){
        ll q;
        cin>>q;
        cout<<v[q]<<endl;
    }
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