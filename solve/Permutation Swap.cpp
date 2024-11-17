#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vll vector<ll>
#define srt sort(a,a+n)
#define sort_vec_gre sort(v.begin(),v.end(),greater<ll>())
#define for_n for(int i=0;i<n;i++)
#define v_sort sort(v.begin(),v.end())
 
/* find index of max value from array--->
int maximum_value= *max_element(a,a+n);
int maximum_value_index = find(a,a+n,mxval)-a;
*/
int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        ll a[n];
        vector< ll > v;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
        }
        ll ds;
        for(int i=1;i<=n;i++) {
           ds=abs(a[i]-i);
           if(ds==0) {
            continue;
           }
           else {
            v.push_back(ds);
           }
        }
        ll ans=1;
        ans=v[0];

        for(auto x: v) {
            ans = __gcd(ans,x);
        }

        cout<<ans<<endl;


    }
    return 0;
}
