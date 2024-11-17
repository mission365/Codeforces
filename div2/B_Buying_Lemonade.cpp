#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,k;
    cin>>n>>k;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    ll presum = 0;
    ll ans = k;
    for(ll i=1;i<=n;i++){
        ll m = (n-i+1);
        ll sum = m*a[i]+presum;
        presum+=a[i];
        if(sum>=k){
            break;
        }
        else ans++;
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