#include <iostream>
#include <string>

class Solution {
public:
    bool isEmailValid(const std::string& email) {
        int atPos = -1;
        int dotPos = -1;
        int countAt = 0;
        int countDot = 0;

        for (size_t i = 0; i < email.size(); ++i) {
            char ch = email[i];

            if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || ch == '_' || ch == '-')) {
                if (ch == '@') {
                    countAt++;
                    atPos = i;
                }
                else if (ch == '.') {
                    countDot++;
                    dotPos = i;
                }
                else {
                    return false;
                }
            }
        }

        return countAt == 1 && countDot == 1 && atPos > 0 && atPos < email.size() - 1 && dotPos - atPos > 1 && dotPos < email.size() - 1;
    }
};

int main() {
    Solution solution;
    std::string inputEmail;

    std::cin >> inputEmail;

    if (solution.isEmailValid(inputEmail)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
