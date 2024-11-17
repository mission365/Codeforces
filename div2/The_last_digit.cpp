#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a, b) (a + b - 1) / b

ll ans;

ll binpow(ll base, ll power, ll m)
{
    ll result = 1;
    if(power == 0) return 1ll;
    if(power == 1){
        ans = base%m;
        return base%m;
    }
    while (power)
    {
        if (power % 2 == 1)
        {
            result = (result * base) % m;
            ans = ((ans%m)*(base%m))%m;
            power--;
        }
        else
        {
            base = (base * base) % m;
            power /= 2;
        }
    }
    return result;
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
        ll a, b;
        cin >> a >> b;
        ans = 1;
        binpow(a, b, 10);
        cout<<ans<<endl;
    }
    // solve();
    return 0;
}