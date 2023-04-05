#include <iostream>

class Solution {
private:
	int num;
	int sum;

	void calculateDigitSum() {
		if (num < 100 || num > 999) {
			sum = -1;
			return;
		}

		sum = 0;
		int temp = num;
		while (temp > 0) {
			sum += temp % 10;
			temp /= 10;
		}
	}

public:
	Solution(int inputNum) : num(inputNum) {
		calculateDigitSum();
	}

	int result() const {
		return sum;
	}
};

int main() {
	int inputNum;

	std::cin >> inputNum;

	Solution solution(inputNum);
	std::cout << solution.result() << std::endl;

	return 0;
}
