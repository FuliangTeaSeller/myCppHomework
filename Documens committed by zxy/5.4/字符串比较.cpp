#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
    void readInput() {
        std::getline(std::cin, needle);
        std::getline(std::cin, haystack);
    }

    std::vector<int> findOccurrences() {
        std::vector<int> occurrences;
        size_t pos = haystack.find(needle);
        while (pos != std::string::npos) {
            occurrences.push_back(pos);
            pos = haystack.find(needle, pos + 1);
        }
        return occurrences;
    }

    void printAnswer(const std::vector<int>& occurrences) {
        if (occurrences.empty()) {
            std::cout << -1 << std::endl;
        }
        else {
            for (size_t i = 0; i < occurrences.size(); i++) {
                std::cout << occurrences[i];
                if (i < occurrences.size() - 1) {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    }

private:
    std::string needle, haystack;
};

int main() {
    Solution solution;
    solution.readInput();
    std::vector<int> occurrences = solution.findOccurrences();
    solution.printAnswer(occurrences);

    return 0;
}
