#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

void solve(){
    ll n;
    cin>>n;
    string s = "abcdefghijklmnopqrstuvwxyz";
    map<char,ll> mp;
    for(ll i=0;i<s.size();i++){
        mp[s[i]] = 0;
    }
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
        for(auto it: mp){
            if(it.second == a[i]){
                cout<<it.first;
                mp[it.first]++;
                break;
            }
        }
    }
    cout<<endl;
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