#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
string s = "aeiou";
void solve(){
    ll n;
    cin>>n;
    string ans;
    for(ll i=0;i<n;i++){
        ans += s[i%5];
    }
    sort(ans.begin(),ans.end());
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