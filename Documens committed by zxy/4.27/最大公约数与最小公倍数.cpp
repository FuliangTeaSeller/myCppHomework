#include <iostream>

class Solution {
public:
	Solution(int num1, int num2) : number1(num1), number2(num2) {}

	int gcd(int a, int b) {
		return b == 0 ? a : gcd(b, a % b);
	}

	int lcm(int a, int b) {
		return a * b / gcd(a, b);
	}

	void printAnswer() {
		int gcdVal = gcd(number1, number2);
		int lcmVal = lcm(number1, number2);
		std::cout << gcdVal << lcmVal << std::endl;
	}

private:
	int number1;
	int number2;
};

int main() {
	int number1, number2;
	std::cin >> number1 >> number2;

	Solution solution(number1, number2);
	solution.printAnswer();

	return 0;
}
