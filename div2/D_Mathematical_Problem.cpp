#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a, b) (a + b - 1) / b

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
    {
        cout << stoi(s) << endl;
    }
    else if (n == 3)
    {
        int num1 = (s[0] - '0') * 10 + (s[1] - '0');
        int ans1 = min(num1 * (s[2] - '0'), num1 + (s[2] - '0'));

        int num2 = (s[1] - '0') * 10 + (s[2] - '0');
        int ans2 = min(num2 * (s[0] - '0'), num2 + (s[0] - '0'));

        cout << min(ans1, ans2) << endl;
    }
    else
    {
        bool chk = false;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                chk = true;
                break;
            }
        }
        if (chk)
        {
            cout << 0 << endl;
        }
        else
        {
            ll ans = 1e18;
            for (ll i = 0; i < n-1; i++)
            {
                ll num = (s[i]-'0')*10 + (s[i+1]-'0');
                for(ll j=0;j<n;j++){
                    if(i==j || j == i+1) continue;
                    if(s[j]=='1')continue;
                    else num+=(s[j]-'0');
                }
                ans = min(ans,num);
            }
            cout<<ans<<endl;
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