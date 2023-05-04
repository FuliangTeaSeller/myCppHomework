#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, k;
	int num = 0;
	cin >> n >> k;
	for (int i = 0;i < n;i++) {
		int tmp;
		cin >> tmp;
		if (tmp <= 0) {
			num++;
		}
	}
	string ans = "NO";
	if (num < k) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}