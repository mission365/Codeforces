#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

vector<ll> divisors(ll n, ll k)
{
    vector<ll> v;
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i <= k)
                v.push_back(i);
            if (n / i != i)
            {
                if (n / i <= k)
                    v.push_back(n / i);
            }
        }
    }
    return v;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    // if(n==k) cout<<1<<endl;
    // else if(n<k) cout<<1<<endl;
    // else{

    // }
    vector<ll> ans = divisors(n, k);
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    // for(auto it: ans){
    //     cout<<it<<" ";
    // }cout<<endl;
    for (ll i = 0; i < ans.size(); i++)
    {
        if (n % ans[i] == 0)
        {
            cout << n / ans[i] << endl;
            return;
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