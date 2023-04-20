#include <iostream>
#include <string>

class Solution {
public:
    Solution(int season) {
        this->season = season;
    }

    void printAnswer() {
        std::string result;

        switch (season) {
        case 1:
            result = "Spring";
            break;
        case 2:
            result = "Summer";
            break;
        case 3:
            result = "Fall";
            break;
        case 4:
            result = "Winter";
            break;
        default:
            result = "Invalid input";
        }

        std::cout << result << std::endl;
    }

private:
    int season;
};

int main() {
    int input;
    std::cin >> input;

    Solution solution(input);
    solution.printAnswer();

    return 0;
}
