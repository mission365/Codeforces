#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    ll a[n+1];
    for(ll i=1;i<=n;i++){
        cin>>a[i];
    }
    bool chk = true;
    for(ll i=1;i<=n;i++){
        if(a[i]==i) continue;
        else if(a[i]==i+1){
            if(a[i+1]==i){
                swap(a[i],a[i+1]);
            }
            else{
            chk = false;
            break;
        }
        }
        else{
            chk = false;
            break;
        }
    }
    if(chk) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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