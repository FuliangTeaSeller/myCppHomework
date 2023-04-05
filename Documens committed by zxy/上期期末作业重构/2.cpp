#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> findNumbersAppearingTwice(const std::vector<int>& nums) {
        std::unordered_map<int, int> countMap;
        std::vector<int> result;

        for (const auto& num : nums) {
            countMap[num]++;
        }

        for (const auto& num : nums) {
            if (countMap[num] == 2) {
                result.push_back(num);
                countMap[num] = 0; // Avoid duplicates in the result
            }
        }

        return result;
    }
};

int main() {
    int n;
    std::cin >> n;

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }

    Solution solution;
    std::vector<int> result = solution.findNumbersAppearingTwice(nums);

    if (!result.empty()) {
        for (const auto& num : result) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    else {
        std::cout << "None" << std::endl;
    }

    return 0;
}
