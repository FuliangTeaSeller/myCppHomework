#include <bits/stdc++.h>
using namespace std;
int main() {
	int x;
	cin >> x;
	vector<int> ans;
	while (x > 0) {
		ans.push_back(x % 8);
		x /= 8;
	}
	ans.resize(5);
	reverse(ans.begin(), ans.end());
	for (auto& it : ans) {
		cout << it;
	}
	cout << endl;
	return 0;
}