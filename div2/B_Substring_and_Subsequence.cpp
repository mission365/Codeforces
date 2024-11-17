#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    string s,s1;
    cin>>s>>s1;
    ll ans = 0;
    for(ll i=0;i<s1.size();i++){
        ll st = i;
        ll cnt = 0;
        for(ll j=0;j<s.size();j++){
            if(s1[st]==s[j]) {
                st++;
                cnt++;
            }
        }
        ans = max(ans,cnt);
    }
    cout<<s.size()+ s1.size() - ans<<endl;
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