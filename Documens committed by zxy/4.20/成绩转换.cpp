#include <iostream>
#include <string>

class Solution {
public:
    Solution(int score) {
        this->score = score;
    }

    void printAnswer() {
        std::string result;

        if (score >= 90) {
            result = "A";
        }
        else if (score >= 80) {
            result = "B";
        }
        else if (score >= 70) {
            result = "C";
        }
        else if (score >= 60) {
            result = "D";
        }
        else {
            result = "E";
        }

        std::cout << result << std::endl;
    }

private:
    int score;
};

int main() {
    int input;
    std::cin >> input;

    Solution solution(input);
    solution.printAnswer();

    return 0;
}
