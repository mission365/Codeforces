#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll cnt = 1, mx = 0;
    vector<ll> vc;
    for(ll i=0;i<n;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
        else {
            vc.push_back(cnt);
            cnt=1;
        }
    }
    for(ll i=0;i<vc.size()-1; i++){
        if(min(vc[i],vc[i+1]) > mx){
            mx = min(vc[i],vc[i+1]);
        }
    }
    cout<<mx*2<<endl;

    
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