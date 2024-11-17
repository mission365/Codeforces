#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll cnt = 0;
    if(a<b)cnt++;
    if(a<c)cnt++;
    if(a<d)cnt++;
    cout<<cnt<<endl;

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