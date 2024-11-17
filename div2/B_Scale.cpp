#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    string s , ans;
    vector<string> vc;
    for(ll i=0;i<n;i++){
        cin>>s;
        if(i%k==0){
            for(ll j=0; j<n; j+=k) ans.push_back(s[j]);
            vc.push_back(ans);
            ans.clear();
        }
    }
    for(auto it: vc) cout<<it<<endl;
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