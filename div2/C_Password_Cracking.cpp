#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
int query(string s) {
    cout << "? " << s << endl;  
    cout.flush();               
    int z;
    cin >> z;     
    cout.flush();      
    return z;
}

void solve() {
    int n;
    cin >> n;  
    string ans = "";  
    for(int i=0;i<n;i++) {
        if (query(ans + '0')) {
            ans += '0';
        } else if(query(ans + '1')){
            ans += '1';
        }
        else  break;
    }
    while(ans.size()!=n) {
        if (query('0'+ans)) {
            ans = '0'+ans;
        } else {
            ans = '1'+ans;
        }
    }
    
    cout << "! " << ans << endl;
    cout.flush(); 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;  
    while (t--) {
        solve(); 
    }

    return 0;
}
