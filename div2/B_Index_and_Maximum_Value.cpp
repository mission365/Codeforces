#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> nums(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    ll mx = *max_element(nums.begin(), nums.end());
    // cout << mx << endl;
    // for(ll i=0;i<n;i++){
    //     mn = min(mn,nums[i]);
    //     mx = max(mx,nums[i]);
    // }
    vector<ll> v;
    while (m--)
    {
        char ch;
        ll l, r;
        cin >> ch >> l >> r;
        if (ch == '+')
        {
            if (l <= mx && r >= mx){
                mx++;
                v.push_back(mx);
            }
                
            else
            {
                v.push_back(mx);
            }
        }
        else
        {
            if (ch == '-')
            {
                if (l <= mx && r >= mx){
                    mx--;
                    v.push_back(mx);
                }
                else{
                    v.push_back(mx);
                }
            }
        }
    }
    if(v.size()>0){
        for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else cout<<0<<endl;

    // cout<<mx<<" "<<mn<<endl;
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