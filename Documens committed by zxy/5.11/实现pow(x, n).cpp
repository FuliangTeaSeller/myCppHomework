#include <iostream>
#include <string>
#include <sstream>

class Solution {
public:
    void readInput() {
        std::string input;
        getline(std::cin, input);
        std::istringstream iss(input);
        std::getline(iss, input, ',');
        x = std::stoi(input);
        std::getline(iss, input);
        n = std::stoi(input);
    }

    int pow() {
        int result = 1;
        while (n > 0) {
            if (n % 2 == 1) {
                result *= x;
            }
            x *= x;
            n /= 2;
        }
        return result;
    }

    void printAnswer(int result) const {
        std::cout << result << std::endl;
    }

private:
    int x;
    int n;
};

int main() {
    Solution solution;
    solution.readInput();
    int result = solution.pow();
    solution.printAnswer(result);
    return 0;
}
