#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> v(n),temp(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        temp[i] = v[i];
    }
    sort(temp.begin(),temp.end());
    ll first = -1, second = -1;
    for(ll i=0;i<n;i++){
        if(v[i]!=temp[i]){
            if(first == -1) first = i;
            second=i+1;
        }
    }
    // cout<<first<<" "<<second<<endl;
    reverse(v.begin()+first, v.begin()+second);
    if(is_sorted(v.begin(),v.end())){
        cout<<"yes"<<endl;
        if(first==-1 && second==-1){
            cout<<1<<" "<<1;
        }
        else{
            cout<<first+1<<" "<<second;
        }
    }
    else cout<<"no"<<endl;
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