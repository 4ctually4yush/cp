#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define repd(i,a,b) for(int i = a; i > b; --i)
using namespace std;
 
void solve() {
	int n;
	cin >> n;
	vector<ll> v;
	vector<pair<int, int>> p;
	ll a = 1;
	rep(i, 0, n) {
		cin >> a;
		v.pb(a);
	}
	int m_pos;
	rep(i, 0, n - 1) {
		m_pos = i;
		rep(j, i + 1, n) {
			if (v[m_pos] > v[j]) {
				m_pos = j;
			}
		}
		if (m_pos != i) {
			p.pb({i, m_pos});
			ll min = v[m_pos];
			rep_d(j, m_pos, i) {
				v[j] = v[j - 1];
			}
			v[i] = min;
		}
	}
	cout << p.size() << "\n";
	for (pair<int, int> i : p) {
		cout << i.first + 1 << " " << i.second + 1 << " " << i.second - i.first << "\n";
	}
 
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
