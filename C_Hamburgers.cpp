#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    string s;
    cin>>s;
    ll nb, ns, nc, pb, ps, pc;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    ll taka;
    cin>>taka;

    ll b=0,c=0,ss=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]=='B')b++;
        else if(s[i]=='S')ss++;
        else c++;
    }
    // cout<<b<<" "<<ss<<" "<<c;

    ll l = 0;
    ll h = 1e15;
    ll ans = 0;
    while(l<=h){
        ll mid = (l+h)/2;

        ll mxb = max(0ll, b*mid-nb);
        ll mxc = max(0ll, c*mid-nc);
        ll mxss = max(0ll, ss*mid-ns);

        ll khoroch = mxb*pb + mxc*pc + mxss*ps;
        
        if(khoroch>taka){
            h = mid-1;
        }
        else{
            ans = mid;
            l = mid+1;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ll t;
    // cin>>t;
    // while(t--) {
    //     solve();
    // }
    solve();
    return 0;
}