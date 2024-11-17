#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll cnt = 0, cnt2 =0;
    for(ll i=0;i<n;i++){
        if(v[i]==25) cnt++;
        if(v[i]==50){
            cnt2++;
            cnt--;
            if(cnt<0){
                cout<<"NO"<<endl;
                return;
            }
        }
        if(v[i]==100){
            cnt--;
            if(cnt2==0){
                cnt-=2;
            }
            else{
                cnt2--;
            }
            if(cnt<0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
}

int main() {
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