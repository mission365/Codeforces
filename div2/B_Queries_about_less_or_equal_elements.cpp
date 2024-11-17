#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(m);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(ll i=0;i<m;i++){
        cin>>b[i];
        auto ub = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
        cout<<ub<<" ";
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