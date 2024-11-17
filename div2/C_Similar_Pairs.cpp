#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    ll o = 0, e = 0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0) e++;
        else o++;
    }
    if(o%2 != e%2) {
        cout<<"NO"<<endl;
        return;
    }
    else{
        if(o%2==0){
            cout<<"YES"<<endl;
            return;
        }
        else {
            for(ll i=0;i<n;i++){
                for(ll j=i+1; j<n; j++){
                    if(v[i]%2 != v[j]%2 and abs(v[i] - v[j]) == 1){
                        cout<<"YES"<<endl;
                        return;
                    }
                }
            }
            cout<<"NO"<<endl;
        }
    }
    
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