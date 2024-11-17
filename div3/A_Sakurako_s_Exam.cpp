#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;
    if (a % 2 != 0) {
        cout << "NO" << endl;
        }
    else if (b % 2 != 0 && a < 2) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
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