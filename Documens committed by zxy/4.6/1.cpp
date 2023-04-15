#include <bits/stdc++.h>
using namespace std;
int comb(int a, int b) {
	int ans = 1;
	if (b == 0 || b == a)return ans;
	for (int i = a, cnt = 0;cnt < b;i--, cnt++) {
		ans *= i;
	}
	for (int i = b;i > 0;i--) {
		ans /= i;
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	while (n--) {
		int num;
		cin >> num;
		for (int i = 0;i < num;i++) {
			for (int j = 0;j <= i;j++) {
				cout << comb(i, j) << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}