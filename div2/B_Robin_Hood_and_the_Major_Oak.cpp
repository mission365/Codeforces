#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll l = n;
    ll h = n-k+1;
    ll fval = l*(l+1)/2;
    ll lval = h*(h-1)/2;
    ll ans = fval-lval;
    if(ans%2 == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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