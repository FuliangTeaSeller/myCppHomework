#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>

class Solution {
public:
	int maxWeightSum(const std::string& s) {
		std::unordered_map<char, int> charCount;

		for (const auto& ch : s) {
			charCount[ch]++;
		}

		std::priority_queue<int> countQueue;
		for (const auto& kv : charCount) {
			countQueue.push(kv.second);
		}

		int weight = 26;
		int result = 0;

		while (!countQueue.empty()) {
			int count = countQueue.top();
			countQueue.pop();

			result += count * weight;
			weight--;
		}

		return result;
	}
};

int main() {
	std::string inputString;
	std::cin >> inputString;

	Solution solution;
	int maxWeight = solution.maxWeightSum(inputString);
	std::cout << maxWeight << std::endl;

	return 0;
}
