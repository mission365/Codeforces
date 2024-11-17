#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll even = 0;
    ll odd = 0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0)even++;
        else odd++;
    }
    if(even>odd){
        for(ll i=0;i<n;i++){
            if(v[i]%2==1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    else{
        for(ll i=0;i<n;i++){
            if(v[i]%2==0){
                cout<<i+1<<endl;
                break;
            }
        }
    }

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