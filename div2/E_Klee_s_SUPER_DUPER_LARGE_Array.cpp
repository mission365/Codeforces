#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll getSum(ll l, ll r){
    return ((r*(r+1))/2 - (l*(l-1))/2);
}

void solve(){
    ll n,k;
    cin>>n>>k;
    ll l=k;
    ll h = k+n-1;
    ll ans = INT_MAX;
    while(l<=h){
        ll mid = (l+h)/2;
        ll sum1 = getSum(k,mid);
        ll sum2 = getSum(mid+1,k+n-1);
        ans = min(ans,abs(sum1-sum2));
        if(sum1>sum2) h = mid-1;
        else l = mid+1;
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