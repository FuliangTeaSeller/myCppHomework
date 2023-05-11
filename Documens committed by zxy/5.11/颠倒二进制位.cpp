#include <iostream>
#include <string>
#include <bitset>

class Solution {
public:
    void readInput() {
        std::cin >> input_binary;
    }

    void reverseBits() {
        std::bitset<32> bits(input_binary);
        for (size_t i = 0; i < 16; ++i) {
            bool temp = bits[i];
            bits[i] = bits[31 - i];
            bits[31 - i] = temp;
        }
        reversed_binary = bits.to_string();
    }

    void printAnswer() const {
        std::cout << reversed_binary << std::endl;
    }

private:
    std::string input_binary;
    std::string reversed_binary;
};

int main() {
    Solution solution;
    solution.readInput();
    solution.reverseBits();
    solution.printAnswer();
    return 0;
}
