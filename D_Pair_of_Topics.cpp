#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    for(ll i=0;i<n;i++){
        cin>>b[i];
    }
    ll c[n];
    for(ll i=0;i<n;i++){
        c[i] = a[i]-b[i];
    }
    sort(c,c+n);

    ll d = n-1;
    ll e = 0;
    ll ans = 0;
    while(c[d]>0 && d>e){
        if(c[d]+c[e] > 0){
            ans+=d-e;
            d-=1;
        }
        else {
            e+=1;
        }
    }
    cout<<ans<<endl;
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