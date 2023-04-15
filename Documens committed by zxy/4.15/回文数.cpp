#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        int temp = x;
        int sum = 0;
        while (temp)
        {
            sum = sum * 10 + temp % 10;
            temp /= 10;
        }
        return sum == x;
    }
    void printPalindromes(int begin, int nums)
    {
        int count = 0;
        for (int i = begin; count < nums; i++)
        {
            if (isPalindrome(i))
            {
                cout << i << endl;
                count++;
            }
        }
    }
};
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m, k;
        cin >> m >> k;
        Solution s;
        s.printPalindromes(m, k);
    }
    system("pause");
    return 0;
}