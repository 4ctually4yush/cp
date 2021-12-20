#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define rep(i,a,b) for(int i = a; i < b; ++i)
#define repd(i,a,b) for(int i = a; i > b; --i)
#define repc(i,a,b,c) for(int i = a; i < b; i+=c)
#define repdc(i,a,b,c) for(int i = a; i > b; i-=c)
#define all(v) v.begin(),v.end()
using namespace std;

ll gcd(ll a, ll b) {
	if (a > b) {
		ll tmp = a;
		a = b;
		b = tmp;
	}
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

void solve() {
	ll n;
	cin >> n;
	rep(i, 2, n - 2) {
		if (gcd(i, n - 1 - i) == 1) {
			cout << i <<  " " << n - 1 - i << " " << "1\n";
			return;
		}
	}
	// ***ALTERNATE (BETTER)***
	// ll n;
	// cin>>n;
	// if (n%2==0) cout<<"2 "<<(n-1)-2<<" 1\n";
	// else {
	// 	int cur=(n-1)/2;
	// 	if (cur%2==0) cout<<cur-1<<" "<<cur+1<<" "<<1<<endl;
	// 	else cout<<cur-2<<" "<<cur+2<<" "<<1<<endl;
	// }
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
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
