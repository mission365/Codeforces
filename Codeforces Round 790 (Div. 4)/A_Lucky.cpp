#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    string s;
    cin>>s;
    ll sum = 0;
    ll sum2 = 0;
    for(ll i=0;i<s.size();i++){
        if(i<3){
            sum+=(ll)s[i];
        }
        else {
            sum2+=(ll)s[i];
        }
    }
    if(sum==sum2)cout<<"YES"<<endl;
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