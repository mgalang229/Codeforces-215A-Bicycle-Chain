#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int m;
	cin >> m;
	vector<int> b(m);
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	// find the maximum ratio that can produced (only if 'b[j]' is divisible by 'a[i]')
	int max_ratio = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[j] % a[i] == 0) {
				max_ratio = max(max_ratio, b[j] / a[i]);
			}
		}
	}
	// count the number of pairs (i, j) that can produce the maximum ratio
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[j] / a[i] == max_ratio && b[j] % a[i] == 0) {
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
