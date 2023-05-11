#include <iostream>
#include <string>
#include <sstream>
#include <vector>

class Solution {
public:
    void readInput() {
        getline(std::cin, input_line);
    }

    void processInput() {
        std::istringstream iss(input_line);
        std::string word;
        while (iss >> word) {
            if (word.back() == '.') {
                word.pop_back();
            }
            word_lengths.push_back(word.length());
        }
    }

    void printAnswer() const {
        for (size_t i = 0; i < word_lengths.size(); ++i) {
            std::cout << word_lengths[i];
            if (i != word_lengths.size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

private:
    std::string input_line;
    std::vector<size_t> word_lengths;
};

int main() {
    Solution solution;
    solution.readInput();
    solution.processInput();
    solution.printAnswer();
    return 0;
}
