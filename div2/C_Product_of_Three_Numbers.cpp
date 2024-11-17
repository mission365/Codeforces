#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

vector<ll> divisors(ll n){
    vector<ll> v;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i == 0){
            if(i!=1) v.push_back(i);
            if(n/i!=i){
                v.push_back(n/i);
            }
        }
    }
    return v;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> ans = divisors(n);
    sort(ans.begin(),ans.end());
    // for(auto it: ans){
    //     cout<<it<<" ";
    // }cout<<endl;
    for(ll i=0;i<ans.size();i++){
        for(ll j=i+1;j<ans.size();j++){
            for(ll k=j+1;k<ans.size();k++){
                if(ans[i]*ans[j]*ans[k] == n){
                    cout<<"YES"<<endl;
                    cout<<ans[i]<<" "<<ans[j]<<" "<<ans[k]<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;

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