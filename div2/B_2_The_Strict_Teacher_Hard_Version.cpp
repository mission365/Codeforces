#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve()
{
    ll n, m, q;
    cin >> n >> m >> q;
    vector<ll> t(m), s(q);
    for (ll i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    while (q--)
    {
        ll x;
        cin >> x;
        if (t[m - 1] < x)
        {
            cout << n - t[m - 1] << endl;
        }
        else if (x < t[0])
        {
            cout << t[0] - 1 << endl;
        }
        else
        {
            ll ub = upper_bound(t.begin(), t.end(), x) - t.begin();
            cout << (t[ub] - t[ub - 1]) / 2 << endl;
        }
    }
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