#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    vector<pair<ll,ll>> v;
    ll sum =0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        v.push_back({a[i],i+1});
        sum+=a[i];
    }
    sort(v.begin(),v.end());
    ll c=1;
    for(ll i=n-2;i>=0;i--){
        sum-=v[i+1].first;
        if(sum<v[i+1].first){
            break;
        }
        else c++;
    }
    vector<ll> ans;
    for(ll i=n-1; i>=n-1-c+1; i--){
        ans.push_back(v[i].second);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

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