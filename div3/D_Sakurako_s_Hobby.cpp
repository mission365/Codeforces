#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        v[i]--;
    }
    string s;
    cin>>s;
    vector<ll> vis(n,0);
    vector<ll> check(n,0);
    
    for (ll i = 0; i < n; i++) {
        if (!vis[i]) {
            queue<ll> q;
            vector<ll> cycle;
            ll bc = 0;
            q.push(i);
            while (!q.empty()) {
                ll x = q.front();
                q.pop();
                if (vis[x]) continue;
                vis[x] = 1;
                cycle.push_back(x);
                
                if (s[x] == '0') bc++;
                ll next = v[x];

                if (!vis[next]) {
                    q.push(next);
                }
            }
            for (ll it : cycle) {
                check[it] = bc;
            }
        }
    }

    for (ll i = 0; i < n; i++) {
        cout << check[i] << " ";
    }
    cout << endl;

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