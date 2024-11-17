#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    int n, m, q;
    cin >> n >> m >> q;
    int l, h, d;
    cin >> l >> h >> d;
    if (l > h)
        swap(l, h);
    if (l < d && d < h)
    {
        cout << (h - l) / 2 << endl;
    }
    else if (d < l)
        cout << l - 1 << endl;
    else
        cout << n - h << endl;
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