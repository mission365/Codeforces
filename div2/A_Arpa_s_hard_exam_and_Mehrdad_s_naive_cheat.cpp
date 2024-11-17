#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a, b) (a + b - 1) / b

ll binpow(ll base, ll power, ll m)
{
    ll result = 1;
    while (power)
    {
        if (power % 2 == 1)
        {
            result = (result * base)%m;
            power--;
        }
        else{
            base = (base*base)%m;
            power /= 2;
        }
    }
    return result;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = binpow(8,n,10);
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