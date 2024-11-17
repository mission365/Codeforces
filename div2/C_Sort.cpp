#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,q;
    cin>>n>>q;
    string s1,s2;
    cin>>s1>>s2;
    while(q--){
        ll l,r;
        cin>>l>>r;
        ll len = r-l+1;
        string a = s1.substr(l-1,len);
        cout<<a<<endl;
        string b = s2.substr(l-1,len);
        // cout<<b<<endl;
        sort(a.begin(),a.end());
        cout<<a<<endl;
        sort(b.begin(),b.end());
        cout<<b<<endl;
        // ll cnt = 0;
        // for(ll i=0;i<=len;i++){
        //     if(a[i]!=b[i]) cnt++;
        // }
        // cout<<cnt<<endl;
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