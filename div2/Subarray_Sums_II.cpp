#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

vector<ll> prefixSum(ll n, ll a[]){
    vector<ll> v(n+1);
    v[1]=a[1];
    for(ll i=2;i<=n;i++){
        v[i] = v[i-1]+a[i];
    }
    return v;
}

void solve(){
    ll n,x;
    cin>>n>>x;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    vector<ll> pre = prefixSum(n,a);
    ll mx = pre[1];
    ll wsum = mx;
    for(ll i=1;i<pre.size();i++){
        wsum += pre[i] - pre[i-1];
        mx = max(mx,wsum);
    }
    cout<<mx<<endl;
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