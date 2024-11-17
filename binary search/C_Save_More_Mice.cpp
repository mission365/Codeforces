#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[k];
    for(ll i=0;i<k;i++){
        cin>>a[i];
    }
    sort(a,a+k, greater<ll>());
    ll cat = 0;
    ll ans = 0;
    for(ll i=0;i<k;i++){
        if(n-cat > n-a[i]){
            ans++;
            cat+=(n-a[i]);
        }
    }
    cout<<ans<<endl;
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