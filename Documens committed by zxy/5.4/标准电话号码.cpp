#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
public:
    Solution() {
        createPhoneMap();
    }

    void readInput() {
        std::cin >> word;
    }

    std::string convertWordToPhoneNumber() {
        std::string phoneNumber;
        for (char c : word) {
            phoneNumber += std::to_string(phoneMap[c]);
        }
        return phoneNumber;
    }

    void printAnswer(const std::string& phoneNumber) {
        std::cout << phoneNumber << std::endl;
    }

private:
    std::string word;
    std::unordered_map<char, int> phoneMap;

    void createPhoneMap() {
        std::string letters[] = { "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };
        for (int i = 0; i < 8; i++) {
            for (char c : letters[i]) {
                phoneMap[c] = i + 2;
            }
        }
    }
};

int main() {
    Solution solution;
    solution.readInput();
    std::string phoneNumber = solution.convertWordToPhoneNumber();
    solution.printAnswer(phoneNumber);

    return 0;
}
