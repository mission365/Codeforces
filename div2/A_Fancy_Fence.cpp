#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    if(360%(180-n)==0)cout<<"YES"<<endl;
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