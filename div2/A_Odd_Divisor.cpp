#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a, b) (a + b - 1) / b

bool isPrime(ll x)
{
    if (x == 1)
        return false;
    for (ll i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    ll n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << "YES" << endl;
        return;
    }

    while (n % 2 == 0)
    {
        n /= 2;
        if (n % 2 == 1 && n!= 1)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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