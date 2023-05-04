#include <iostream>

class Solution {
public:
    void sort(int num[], int n) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (num[j] > num[j + 1]) {
                    int temp = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = temp;
                }
            }
        }
    }

    void printAnswer(int num[], int n) {
        for (int i = 0; i < n; i++) {
            std::cout << num[i];
            if (i < n - 1) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;
    int num[100];
    for (int i = 0; i < n; i++) {
        std::cin >> num[i];
    }

    Solution solution;
    solution.sort(num, n);
    solution.printAnswer(num, n);

    return 0;
}
