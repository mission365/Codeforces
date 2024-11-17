#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n),v2(n-1),v3(n-2);
    ll sum1 = 0, sum2=0, sum3=0, c1=0, c2=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        sum1+=v[i];
    }
    for(ll i=0;i<n-1;i++){
        cin>>v2[i];
        sum2+=v2[i];
    }
    c1 = sum1-sum2;
    for(ll i=0;i<n-2;i++){
        cin>>v3[i];
        sum3+=v3[i];
    }
    c2 = sum2-sum3;
    cout<<c1<<endl;
    cout<<c2<<endl;
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