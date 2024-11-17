#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    for(ll i=0;i<n;i++){
        auto up = upper_bound(v.begin(),v.end(),r-v[i]) - v.begin();
        auto lb = lower_bound(v.begin(),v.end(), l-v[i]) - v.begin();
        if(i<up && i>=lb) lb++;
        if(up>lb){
            ans = ans + up - lb;
        }
    }
    cout<<ans/2<<endl;
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