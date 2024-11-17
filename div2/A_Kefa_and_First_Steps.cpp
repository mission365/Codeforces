#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll i=0, j=1;
    ll cnt = 1;
    ll mx = INT_MIN;

    while(i<n-1){
        if(v[i]<=v[i+1]){
            cnt++;
            i++;
            j++;
            mx = max(mx,cnt);
        }
        else{
            
            cnt=1;
            i++;
            j++;
        }
    }
    if(mx==INT_MIN) cout<<1<<endl;
    else cout<<mx<<endl;

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