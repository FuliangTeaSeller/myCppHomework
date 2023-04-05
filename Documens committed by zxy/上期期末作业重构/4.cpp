#include <iostream>
#include <vector>
#include <string>
#include <sstream>

class Fraction {
public:
    long long numerator;
    long long denominator;

    Fraction(long long num, long long den) : numerator(num), denominator(den) {}

    static long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    Fraction add(const Fraction& other) {
        long long commonDenominator = denominator * other.denominator;
        long long commonNumerator = numerator * other.denominator + other.numerator * denominator;

        long long gcdValue = gcd(commonNumerator, commonDenominator);
        return Fraction(commonNumerator / gcdValue, commonDenominator / gcdValue);
    }

    std::string toString() const {
        if (denominator == 1) {
            return std::to_string(numerator);
        }
        else {
            return std::to_string(numerator) + "/" + std::to_string(denominator);
        }
    }
};

class Solution {
public:
    Fraction sumFractions(const std::vector<Fraction>& fractions) {
        Fraction sum(0, 1);
        for (const auto& fraction : fractions) {
            sum = sum.add(fraction);
        }
        return sum;
    }
};

int main() {
    int n;
    std::cin >> n;
    std::cin.ignore();

    std::vector<Fraction> fractions;

    std::string inputLine;
    getline(std::cin, inputLine);
    std::istringstream iss(inputLine);

    for (int i = 0; i < n; ++i) {
        long long num, den;
        char ch;
        iss >> num >> ch >> den;
        if (den == 0) {
            return 0;
        }
        fractions.push_back(Fraction(num, den));
    }

    Solution solution;
    Fraction result = solution.sumFractions(fractions);

    std::cout <<  result.toString() << std::endl;

    return 0;
}
