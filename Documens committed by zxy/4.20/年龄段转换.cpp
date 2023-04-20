#include <iostream>
#include <string>

class Solution {
public:
    Solution(int age) {
        this->age = age;
    }

    void printAnswer() {
        std::string result;

        if (age >= 1 && age <= 10) {
            result = "Children";
        }
        else if (age >= 11 && age <= 20) {
            result = "Teenagers";
        }
        else if (age >= 21 && age <= 40) {
            result = "Youth";
        }
        else if (age >= 41 && age <= 50) {
            result = "Middle-aged";
        }
        else if (age >= 51 && age <= 80) {
            result = "Elderly";
        }
        else if (age >= 81 && age <= 100) {
            result = "Old man";
        }
        else {
            result = "Invalid input";
        }

        std::cout << result << std::endl;
    }

private:
    int age;
};

int main() {
    int input;
    std::cin >> input;

    Solution solution(input);
    solution.printAnswer();

    return 0;
}
