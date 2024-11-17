#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;
    if (m == 1) {
        ll num = (n - 1) * n / 2;
        cout << num << ' ' << num << '\n';
        return;
    }
    else {
        ll q = n/m;
        ll r = n%m;
        ll mn = q*(q-1)/2 * (m-r) + (q+1) * q / 2 * r;
        cout<<mn<<" ";
    }
    cout<<(n-m+1)*(n-m)/2;
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