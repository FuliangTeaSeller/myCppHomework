#include <iostream>
#include <vector>
#include <sstream>

class Solution {
public:
    Solution(const std::vector<int>& inputNumbers) : numbers(inputNumbers) {}

    int even(int n) {
        return n % 2 == 0 ? 1 : 0;
    }

    int sumOfOdds() {
        int sum = 0;
        for (const auto& number : numbers) {
            if (!even(number)) {
                sum += number;
            }
        }
        return sum;
    }

    void printAnswer() {
        std::cout << sumOfOdds() << std::endl;
    }

private:
    std::vector<int> numbers;
};

int main() {
    std::string inputLine;
    std::getline(std::cin, inputLine);
    std::istringstream iss(inputLine);
    std::vector<int> numbers;

    int number;
    while (iss >> number && number > 0) {
        numbers.push_back(number);
    }

    Solution solution(numbers);
    solution.printAnswer();

    return 0;
}
