#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve()
{
    char ch[11][11];
    ll sum = 0, x, y,n;
    for (ll i = 1; i < 11; i++)
    {
        for (ll j = 1; j < 11; j++)
        {
            cin >> ch[i][j];
            if (ch[i][j] == 'X')
            {
                x = i;
                y = j;
                if (x > 5)
                    x = 11 - x;
                if (y > 5)
                    y = 11 - y;
                n = min(x, y);
                if (n > 5)
                {
                    sum += (11 - n);
                }
                else
                {
                    sum += n;
                }
            }
            
        }
    }
    cout<<sum<<endl;
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