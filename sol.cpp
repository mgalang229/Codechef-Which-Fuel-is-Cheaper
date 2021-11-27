#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int x, y, a, b, k;
		cin >> x >> y >> a >> b >> k;
		// just find out which is cheaper
		int p = x + (a * k);
		int d = y + (b * k);
		string ans = "";
		if (p < d) {
			ans = "PETROL";
		} else if (d < p) {
			ans = "DIESEL";
		} else {
			ans = "SAME PRICE";
		}
		cout << ans << '\n';
	}
	return 0;
}
