#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define ceil(a,b) (a+b-1)/b

int main() {
	int t, n, a, b, s;
	cin >> t;
	while (t--) {
		s = 0;
		cin >> n >> a >> b;
		if (n % 2) {
			s += a;
			n--;
		}
		if (2 * a <= b)cout << s + a * n << endl;
		else cout << s + (n / 2) * b << endl;
	}
	return 0;
}