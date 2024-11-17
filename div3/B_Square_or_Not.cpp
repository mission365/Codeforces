#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int rt = sqrt(n);
    if (rt * rt != n)
    {
        cout << "No" << endl;
        return;
    }
    int cnt1 = 0;
    for (char c : s)
    {
        if (c == '1')
            cnt1++;
    }
    if (cnt1 == 4 * (rt - 1))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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