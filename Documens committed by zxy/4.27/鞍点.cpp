#include <iostream>
#include <vector>

class Solution {
public:
    Solution(const std::vector<std::vector<int>>& matrix) : inputMatrix(matrix) {}

    std::pair<int, int> findSaddlePoint() {
        int n = inputMatrix.size();
        for (int i = 0; i < n; ++i) {
            int maxRowIndex = i;
            int maxRowValue = inputMatrix[i][0];
            for (int j = 1; j < n; ++j) {
                if (inputMatrix[i][j] > maxRowValue) {
                    maxRowValue = inputMatrix[i][j];
                    maxRowIndex = j;
                }
            }

            bool isSaddlePoint = true;
            for (int k = 0; k < n; ++k) {
                if (inputMatrix[k][maxRowIndex] < maxRowValue) {
                    isSaddlePoint = false;
                    break;
                }
            }

            if (isSaddlePoint) {
                return { i, maxRowIndex };
            }
        }

        return { -1, -1 };
    }

    void printAnswer() {
        std::pair<int, int> saddlePoint = findSaddlePoint();
        if (saddlePoint.first == -1 && saddlePoint.second == -1) {
            std::cout << "NO" << std::endl;
        }
        else {
            std::cout << saddlePoint.first << " " << saddlePoint.second << std::endl;
        }
    }

private:
    std::vector<std::vector<int>> inputMatrix;
};

int main() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    Solution solution(matrix);
    solution.printAnswer();

    return 0;
}
