#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll mx = 0, mx2 = 0;
    for(ll i=0;i<n;i++){
        ll p,q;
        cin>>p>>q;
        mx = max(mx,p);
        mx2 = max(mx2,q);
    }
    cout<<2*(mx+mx2)<<endl;
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