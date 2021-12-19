#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define repd(i,a,b) for(int i = a; i > b; --i)
#define repi(i,a,b,c) for(int i = a; i < b; i+=c)
#define repdi(i,a,b,c) for(int i = a; i > b; i-=c)
using namespace std;
 
void solve() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		rep(i, 0, n) {
			cin >> a[i];
		}
		int ans = 0;
		sort(a, a + n);
		rep(i, 0, k) {
			ans += a[n - 2 * k + i] / a[n - k  + i];
		}
		rep(i, 0, n - 2 * k) {
			ans += a[i];
		}
		cout << ans << "\n";
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
