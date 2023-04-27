#include <iostream>
#include <vector>
#include <sstream>

class Solution {
public:
	Solution(const std::vector<std::pair<int, int>>& poly1, const std::vector<std::pair<int, int>>& poly2)
		: polynomial1(poly1), polynomial2(poly2) {}

	std::vector<std::pair<int, int>> addPolynomials() {
		std::vector<int> resultCoefficients(101, 0);
		for (const auto& term : polynomial1) {
			resultCoefficients[term.first] += term.second;
		}
		for (const auto& term : polynomial2) {
			resultCoefficients[term.first] += term.second;
		}

		std::vector<std::pair<int, int>> result;
		for (int i = 100; i >= 0; --i) {
			if (resultCoefficients[i] != 0) {
				result.emplace_back(i, resultCoefficients[i]);
			}
		}

		return result;
	}

	void printAnswer() {
		std::vector<std::pair<int, int>> result = addPolynomials();
		std::stringstream ss;

		for (const auto& term : result) {
			if (term.second > 0 && !ss.str().empty()) {
				ss << '+';
			}
			if (term.first == 0)
				ss << term.second;
			else
				ss << term.second << "x" << term.first;
		}

		std::cout << ss.str() << std::endl;
	}

private:
	std::vector<std::pair<int, int>> polynomial1;
	std::vector<std::pair<int, int>> polynomial2;
};

int main() {
	std::vector<std::pair<int, int>> poly1, poly2;
	int exponent, coefficient;
	while (std::cin >> exponent >> coefficient && exponent != -1) {
		poly1.emplace_back(exponent, coefficient);
		if (exponent == 0)
			break;
	}

	while (std::cin >> exponent >> coefficient && exponent != -1) {
		poly2.emplace_back(exponent, coefficient);
		if (exponent == 0)
			break;
	}

	Solution solution(poly1, poly2);
	solution.printAnswer();

	return 0;
}
