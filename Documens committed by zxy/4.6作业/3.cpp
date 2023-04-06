#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n--) {
		int x, b;
		cin >> x >> b;
		vector<int> ans;
		while (x > 0) {
			ans.push_back(x % b);
			x /= b;
		}
		reverse(ans.begin(), ans.end());
		for (auto& it : ans) {
			if (it >= 10) {
				printf("%c", it - 10 + 'A');
			}
			else {
				cout << it;
			}
		}
		cout << endl;
	}

	return 0;
}