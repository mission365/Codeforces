#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n), v2(n);
    for(ll i=0;i<n; i++) cin>>v[i];
    for(ll i=0;i<n; i++) cin>>v2[i];

    ll l = 0, h = 20001;
    ll mn = 0;
    while(l<=h){
        ll mid = (l+h)/2;
        ll cost = 0;
        for(ll i=0;i<n;i++) {
            cost += max((v[i]*mid - v2[i]),mn);
        }
        if(cost<=k) l = mid + 1;
        else h = mid-1;
    }
    cout<<h<<endl;
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