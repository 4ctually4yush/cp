#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define repd(i,a,b) for(int i = a; i > b; --i)
#define repi(i,a,b,c) for(int i = a; i < b; i+=c)
using namespace std;
 
void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		ll a[n];
		rep(i, 0, n) {
			cin >> a[i];
		}
		ll d = 0;
		rep(j, 0, 2) {
			bool flag = 1;
			ll d_temp = 0;
			repi(i, j, n, 2) {
				d_temp = __gcd(d_temp, a[i]);
			}
			repi(i, 1 - j, n, 2) {
				if (a[i] % d_temp == 0) flag = 0;
			}
			if (flag) {d = d_temp;}
		}
		cout << d << "\n";
	}
 
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
}
