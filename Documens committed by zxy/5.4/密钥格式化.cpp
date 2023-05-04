#include<bits/stdc++.h>
using namespace std;
int main() {
	string input;
	getline(cin, input);
	string processed;
	transform(processed.begin(), processed.end(), processed.begin(), ::toupper);
	for (int i = 0; i < input.length(); i++) {
		if (input[i] != '-') {
			processed += input[i];
		}
	}
	int n;
	cin >> n;
	string output;
	int i = 0;
	for (;i < processed.length() % n;i++) {
		output += processed[i];
	}
	for (int j = 0;j < processed.length() / n;j++) {
		output += '-';
		output += processed.substr(i + j * n, n);
	}
	cout << output;
	return 0;
}