#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a, b) (a + b - 1) / b

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll sum = 0;
    ll ans = 0;
    for(ll l=0,r=0; l<n;){
        while(r<n && a[r]-a[l]<=1 && sum+a[r]<=m){
            sum+=a[r];
            r++;
        }
        ans = max(ans,sum);
        sum-=a[l];
        l++;
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}