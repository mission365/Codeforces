#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    string s(n,'a');
    for(ll i=n-2;i>=0;i--){
        if(k<=n-i-1){
            s[i]='b';
            s[n-k]='b';
            cout<<s<<endl;
            break;
        }
        k -= n-i-1;
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