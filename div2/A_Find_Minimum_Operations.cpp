#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    ll ans = 0;
    while(n>0){
        ans += n%k;
        n /= k;
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