#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

ll n,t;
const ll N = 1e5+9;
ll a[N], p[N];

void solve()
{
    cin >> n >> t;
    for(ll i=1; i<=n; i++){
        cin>>a[i];
        p[i] = p[i-1] + a[i];
    }
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        ll l = i;
        ll h = n;
        ll mid;
        while(l<=h){
            mid = (l+h)/2;
            if(p[mid]-p[i-1] <= t){
                ans = max(ans, mid-i+1);
                l = mid+1;
            }
            else h = mid-1;
        }
    }
    cout<<ans<<endl;
}

int main()
{
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