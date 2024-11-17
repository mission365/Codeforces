#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void update(int x, int change, map<ll,ll> &m, multiset<ll> &ms)
{
    if (ms.find(m[x]) != ms.end())
        ms.erase(ms.find(m[x]));
    m[x] += change;
    ms.insert(m[x]);
}

void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> v(n), arr(n), ans(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (ll i = 0; i < n; i++)
    {
        arr[i] = v[i] - i;
    }
    map<ll, ll> m;
    multiset<ll> ms;

    for (ll i = 0; i < k; i++)
    {
        update(arr[i], 1,m,ms);
    }

    ans[0] = k - (*ms.rbegin());

    for (ll i = k; i < n; i++)
    {
        update(arr[i - k], -1,m,ms);
        update(arr[i], 1,m,ms);
        ans[i - k + 1] = k - (*ms.rbegin());
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << ans[l - 1] << endl;
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