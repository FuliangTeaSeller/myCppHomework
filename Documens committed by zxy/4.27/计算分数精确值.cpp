#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    Solution(int num1, int num2) : numerator(num1), denominator(num2) {}

    std::vector<int> calculateFraction(int maxDigits) {
        std::vector<int> result;
        int remainder = numerator;

        for (int i = 0; i < maxDigits; ++i) {
            remainder *= 10;
            result.push_back(remainder / denominator);
            remainder %= denominator;

            if (remainder == 0) {
                break;
            }
        }

        return result;
    }

    void printAnswer() {
        std::vector<int> fraction = calculateFraction(200);
        std::cout << "0.";

        for (const auto& digit : fraction) {
            std::cout << digit;
        }

        std::cout << std::endl;
    }

private:
    int numerator;
    int denominator;
};

int main() {
    int numerator, denominator;
    char delimiter;
    std::cin >> numerator >> delimiter >> denominator;

    Solution solution(numerator, denominator);
    solution.printAnswer();

    return 0;
}
